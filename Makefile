NAME = libftprintf.a
LIBFT = libft.a
SRC = $(wildcard ./*.c)
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all:	$(LIBFT) $(NAME) 

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	cd ../libft/ && $(MAKE)

clean:
	rm -f *.o *.out
	cd ../libft/ && rm -f *.o *.out

fclean:	clean
	rm -f *.all
	cd ../libft/ && rm -f *.all

re:	fclean all

