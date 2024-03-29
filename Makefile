# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 21:59:50 by mhirch            #+#    #+#              #
#    Updated: 2022/10/07 21:59:50 by mhirch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h 
CC = cc 


FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_memmove.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	
OBJ = $(FILES:.c=.o)

all: $(NAME)
$(NAME): $(HEADER) $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) ${CFLAGS} $< -o $@ -c 
clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: clean fclean re all
