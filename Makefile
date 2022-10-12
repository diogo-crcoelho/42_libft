# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 18:27:40 by soups             #+#    #+#              #
#    Updated: 2022/10/12 15:45:14 by dcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(wildcard *.c)
# SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
# 	ft_strlen.c \
# 	ft_memset.c \
# 	ft_bzero.c \
# 	ft_memcpy.c \
# 	ft_memmove.c \
# 	ft_strlcpy.c \
# 	ft_strlcat.c \
# 	ft_toupper.c ft_tolower. \
# 	ft_strchr.c ft_strrchr.c \
# 	ft_strncmp.c\
# 	ft_memchr.c \
# 	ft_memcmp.c \
# 	ft_strnstr.c \
# 	ft_atoi.c \
# 	ft_strdup.c \
# 	ft_calloc.c
OBJS = $(SRCS:.c=.o)
INC = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
CPPFLAGS = -fsanitize=address -g
NORM = norminette -R

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
		
all : $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

norm :
	$(NORM) CheckDefine $(INC)
	$(NORM) CheckForbiddenSourceHeader $(SRCS)

sanitize:
	$(CC) $(CFLAGS) $(CPPFLAGS) $(SRCS)
	