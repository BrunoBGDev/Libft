SRCS = ft_atoi.c ft_bzero.c ft_calloc.c \
	   ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_itoa.c \
	   ft_memchr.c ft_memcmp.c ft_memcpy.c ft_split.c \
	   ft_memmove.c ft_memset.c ft_putchar_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	   ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	   ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c \
	   ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c\

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c \

NAME = libft.a
OBJS_DIR = ./

OBJS = $(SRCS:.c=.o)
 
OBJSB = $(SRCSB:.c=.o)

CC = cc
 
CC_FLAGS = -Wall -Wextra -Werror
 
$(OBJS_DIR)%.o : %.c libft.h
	@cc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -rf $(OBJS) $(OBJSB)
	@echo All Clear!!
fclean: clean
		@rm -f $(NAME)

re: fclean all

bonus: $(OBJSB)
	@ar r $(NAME) $(OBJSB)

.PHONY: all clean fclean re
