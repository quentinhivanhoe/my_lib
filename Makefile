##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

CC	=	gcc

MAIN	=	main.c

EXEC 	=	lib.out

CS 		=	./coding-style/coding-style.sh

LOG		=	coding-style/report/coding-style-reports.log

REPORTS =	coding-style/report/

SRC	=	$(wildcard library/memlib/*.c) 		\
		$(wildcard library/arraylib/*.c) 	\
		$(wildcard library/strlib/*.c)		\
		$(wildcard library/mathlib/*.c)		\
		$(wildcard library/my_printf/*.c)

LIB_PATH = libmy.a

LIB_NAME = my

OBJ	=	$(SRC:.c=.o)

LIB_FLAGS	=	-L . -l my -I include

CFLAGS	=	-W -Wall -Wextra -Werror

all: $(LIB_PATH)
	$(CC) -g3 $(MAIN) $(LIB_FLAGS) $(CFLAGS) -o $(EXEC)

$(LIB_PATH): $(OBJ)
	ar rc $(LIB_PATH) $(OBJ)
	make clean

.PHONY: clean fclean norm

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f vgcore*

fclean: clean
	rm -f $(EXEC)
	rm -f $(LIB_PATH)
	rm -f *.out

norm: fclean
	$(CS) . $(REPORTS)
	cat $(LOG)

re: clean all
