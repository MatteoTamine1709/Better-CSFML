##
## EPITECH PROJECT, 2019
## CPool_evalexpr_2019
## File description:
## Makefile
##

SRC		=	src/main.c

NAME	= 	test

INCLUDE 	= -I ./include

BETTER_CSFML = -L./lib -l better_csfml

CSFML_LIB = -l csfml-graphics -l csfml-system -l csfml-window -lm

all:	$(NAME)

$(NAME):
	cd lib && make re
	gcc -g $(SRC) -o $(NAME) ${BETTER_CSFML} ${CSFML_LIB} ${INCLUDE}

clean:
	rm -rf $(NAME)

fclean:		clean
	rm -rf $(NAME)

re: fclean all
