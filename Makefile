SRCS = main.c p.c s.c r.c
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
INC = push_swap.h
OBJS = ${SRCS:%.c=%.o}

all: ${NAME}

${NAME} : ${INC} ${OBJS}
	gcc ${CFLAGS} ${OBJS} -o push_swap

%.c : %.o
	@gcc ${CFLAGS} -c -I push_swap.h

clean:
	@rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all