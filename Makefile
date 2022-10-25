# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 18:27:40 by soups             #+#    #+#              #
#    Updated: 2022/10/25 17:33:33 by dcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcat.c ft_strlcpy.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c \
	ft_strncmp.c\
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_strtrim.c \
	ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_substr.c ft_split.c \
	ft_strjoin.c \
	ft_strmapi.c  ft_striteri.c

B_SRCS = ft_lstnew.c \
	ft_lstadd_front.c ft_lstadd_back.c\
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NORM = norminette -R

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
		
all : $(NAME)

bonus: $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
