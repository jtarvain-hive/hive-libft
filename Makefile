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

SRCS :=  ascii/ft_isalpha.c ascii/ft_isdigit.c ascii/ft_isalnum.c \
    ascii/ft_isascii.c ascii/ft_isprint.c ascii/ft_toupper.c \
    ascii/ft_tolower.c ascii/ft_isspace.c ascii/ft_islower.c \
    ascii/ft_isupper.c string/ft_strlen.c string/ft_strchr.c \
    string/ft_strrchr.c string/ft_strncmp.c string/ft_strlcpy.c \
    string/ft_strlcat.c string/ft_strnstr.c string/ft_strdup.c \
    string/ft_substr.c string/ft_strjoin.c string/ft_strtrim.c \
    string/ft_split.c string/ft_strmapi.c string/ft_striteri.c \
    memory/ft_memset.c memory/ft_bzero.c memory/ft_memcpy.c \
    memory/ft_memchr.c memory/ft_memcmp.c memory/ft_memmove.c \
    memory/ft_calloc.c conversion/ft_atoi.c conversion/ft_itoa.c \
    output/ft_putchar_fd.c output/ft_putstr_fd.c output/ft_putendl_fd.c \
    output/ft_putnbr_fd.c list/ft_lstnew.c list/ft_lstadd_front.c \
    list/ft_lstsize.c list/ft_lstlast.c list/ft_lstadd_back.c \
    list/ft_lstdelone.c list/ft_lstclear.c list/ft_lstiter.c \
    list/ft_lstmap.c printf/ft_printf.c printf/p_putchar.c \
    printf/p_puthex.c printf/p_putstr.c printf/p_putnbr.c \
	gnl/get_next_line.c

BONUS := list/ft_lstnew.c list/ft_lstadd_front.c list/ft_lstsize.c\
	list/ft_lstlast.c list/ft_lstadd_back.c list/ft_lstdelone.c\
	 list/ft_lstclear.c list/ft_lstiter.c list/ft_lstmap.c

NAME := libft.a

CC := cc

OBJS := $(addprefix obj/, $(notdir $(SRCS:.c=.o))) 

BONUS_OBJS := $(BONUS:.c=.o)

CFLAGS := -Wall -Wextra -Werror -I.

all: $(NAME) $(BONUS)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

obj/%.o: */%.c | obj libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

obj:
	@mkdir -p $@

clean:
	@rm -rf obj .bonus

fclean: clean
	@rm -f $(NAME)

re: fclean all

.bonus: ${OBJS} ${BONUS_OBJS}
	@ar rcs ${NAME} $^
	@touch $@

bonus: .bonus

.PHONY: all clean fclean re bonus