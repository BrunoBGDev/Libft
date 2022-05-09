SRCS	=	

OBJS	=	${SRCS:.c=.o}

CC	= cc
RM	= rm -rf

libft = 


CFLAGS	=	-Wall -g

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
