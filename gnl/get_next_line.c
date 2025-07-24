#include "libft.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*stash;
	char		*line;
	size_t		new;
	ssize_t		bytes_read;

	if (fd < 0 || fd > 1024)
		return (NULL);
	if (!find_line(fd, buffer, &bytes_read, &stash))
	{
		if (stash)
			free(stash);
		return (NULL);
	}
	if (!stash && bytes_read == 0)
		return (NULL);
	if (!extract_line(&stash, buffer, &line))
		return (NULL);
	new = found_line(buffer);
	if (new > 0)
		ft_memcpy(buffer, buffer + new, ft_strlen(buffer + new) + 1);
	else
		buffer[0] = 0;
	return (line);
}

int	find_line(int fd, char *buffer, ssize_t *bytes_read, char **stash)
{
	*bytes_read = 1;
	if (buffer[0] && found_line(buffer))
		return (1);
	while (*bytes_read > 0)
	{
		if (found_line(buffer))
			return (1);
		if (buffer[0])
		{
			*stash = gnl_strjoin(stash, buffer);
			if (!*stash)
				return (0);
			buffer[0] = 0;
		}
		*bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (*bytes_read == -1)
			return (0);
		buffer[*bytes_read] = 0;
	}
	return (1);
}

char	*gnl_strjoin(char **stash, const char *buffer)
{
	char	*str;

	if (!*stash)
		return (ft_strdup(buffer));
	else
	{
		str = ft_strjoin(*stash, buffer);
		if (!str)
		{
			*stash = NULL;
			return (NULL);
		}
		free(*stash);
		*stash = (NULL);
	}
	return (str);
}

int	extract_line(char **stash, const char *buffer, char **line)
{
	char	*sub;
	size_t	newline;

	newline = found_line(buffer);
	if (!newline)
	{
		*line = gnl_strjoin(stash, buffer);
		if (!*line)
		{
			free(*stash);
			*stash = NULL;
			return (0);
		}
		return (1);
	}
	sub = ft_substr(buffer, 0, newline);
	if (!sub)
		return (free(*stash), 0);
	*line = gnl_strjoin(stash, sub);
	free(sub);
	if (!*line)
		return (0);
	return (1);
}

size_t	found_line(const char *buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}