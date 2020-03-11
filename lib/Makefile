##
## EPITECH PROJECT, 2019
## day10
## File description:
## Makefile
##

SRC	=	Graphics/test.c

CSFML_LIB = -l csfml-graphics -l csfml-system -lm -l csfml-window

NAME	= libbetter_csfml.a

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re: fclean all
