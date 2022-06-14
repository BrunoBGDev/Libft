# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 08:46:58 by bbraga            #+#    #+#              #
#    Updated: 2022/06/14 11:26:27 by bbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c \
	   ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_itoa.c \
	   ft_memchr.c ft_memcmp.c ft_memcpy.c ft_split.c \
	   ft_memmove.c ft_memset.c ft_putchar_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	   ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	   ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	   ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c\

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

NAME = libft.a
OBJS_DIR = ./

OBJS = $(SRCS:.c=.o)
 
BONUS = $(SRC_BONUS:.c=.o)

CC = cc
 
CC_FLAGS = -Wall -Wextra -Werror
 
$(OBJS_DIR)%.o : %.c libft.h
	cc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS) $(BONUS)
fclean: clean
		rm -f $(NAME)

re: fclean all

bonus: $(BONUS)
	ar r $(NAME) $(BONUS)

.PHONY: all clean fclean re
