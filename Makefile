##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC 	=	$(wildcard lib/my/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	 libmy.a

MY 	=	my.h

CFLAGS	=	-g

BIN	=	my_ls

all:	$(NAME)

$(NAME):	$(OBJ)
	mkdir -p include
	ar rc $(NAME) $(OBJ)
	gcc *.c -o $(BIN) -L. -lmy

clean:
	rm -f lib/my/*.o

fclean: clean
	rm -f $(NAME)
	rm -f $(BIN)

re:	clean	all
