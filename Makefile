NAME = libftprintf.a

SRC = ft_printf.c ft_putchara.c ft_putnbr.c ft_putstr.c ft_putaddress.c ft_puthexa.c ft_putuint.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
		ar -rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
		$(CC) $(FLAGS) -c $(SRC)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all