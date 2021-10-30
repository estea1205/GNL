#This is makefile
SRCS = 
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c99
OBJ = a.out
NAME = libft.a


all: $(NAME)

.c.o:


	
$(OBJ): *.o
	$(CC) *.o -o $(OBJ)

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) ft_atoi.c

exec:
	./a.out

clean:
	rm -rf a.out

fclean:

re:


.PHONY: all clean
