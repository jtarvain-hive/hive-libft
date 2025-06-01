# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 13:46:46 by jtarvain          #+#    #+#              #
#    Updated: 2025/05/26 03:43:25 by jtarvain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := cc

BONUS := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	 ft_lstclear.c ft_lstiter.c ft_lstmap.c
	 
SRCS :=  ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_isspace.c\
		ft_islower.c\
		ft_isupper.c

OBJS := $(SRCS:.c=.o) 

CFLAGS := -Wall -Wextra -Werror

BONUS_OBJS := $(BONUS:.c=.o)

all: $(NAME) $(BONUS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.bonus: ${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} $^
	touch $@

bonus: .bonus

.PHONY: all clean fclean re bonus