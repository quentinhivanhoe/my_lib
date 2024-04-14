##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

CC	=	gcc

MAIN	=	main.c

EXEC 	=	lib.out

SRC	=	$(wildcard library/memlib/*.c) 		\
		$(wildcard library/arraylib/*.c) 	\
		$(wildcard library/strlib/*.c)		\
		$(wildcard library/mathlib/*.c)		\

LIB_PATH = libmy.a

LIB_NAME = my

OBJ	=	$(SRC:.c=.o)

LIB_FLAGS	=	-L . -l my -I include

CFLAGS	=	-W -Wall -Wextra -Werror

all: $(LIB_PATH)
	$(CC) -g3 $(MAIN) $(LIB_FLAGS) -o $(EXEC)

$(LIB_PATH): $(OBJ)
	ar rc $(LIB_PATH) $(OBJ)
	make clean

.PHONY: clean fclean

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f vgcore*

fclean: clean
	rm -f $(EXEC)
	rm -f $(LIB_PATH)
	rm -f *.out

re: clean all
