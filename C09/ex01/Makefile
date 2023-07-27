FLAGS = -Wall -Wextra -Werror
SRC = $(addprefix srcs/,ft_putchar.c  ft_putstr.c  ft_strcmp.c  ft_strlen.c  ft_swap.c)
HEADER = includes
OBJ = $(SRC:.c=.o)
EXEC = libft.a

all: $(EXEC)

$(EXEC): $(OBJ)
	ar rcs $(EXEC) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -I$(HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all
