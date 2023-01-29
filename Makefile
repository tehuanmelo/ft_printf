NAME = libftprintf.a
SRCFILES =\
ft_printf.c\
ft_putchar.c\
ft_puthex.c\
ft_putnbr.c\
ft_putstr.c
vpath %.c src
OBJPATH = obj/
SRCPATH = src/
SRC = $(addprefix $(SRCPATH), $(SRCFILES))
OBJ = $(patsubst $(SRCPATH)%.c, $(OBJPATH)%.o, $(SRC))
CC = gcc
CFLAGS = -Wall -Werror -Wextra

.SILENT:

all:	$(OBJPATH) $(NAME)

$(OBJPATH):
	mkdir $(OBJPATH)

$(NAME):	$(OBJ)
	ar r $(NAME) $(OBJ)
	echo "Compilation done successfully!"

$(OBJPATH)%.o:	%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJPATH)

fclean:	clean
	rm -f $(NAME)

re:		fclean all