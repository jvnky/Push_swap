NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
SRC = $(FILES:.c=.o)

FILES = fonction.c\
		ft_atoi.c\
		ft_split.c\
		function1.c\
		listedfunction.c\
		main.c\
		checker.c\
		rotation.c\
		rotation1.c\
		algo.c\
		algo1.c\
		sorted.c\


%.o : %.c
	$(CC) $(CFLAGS) -c $(FILES)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME) clean

clean:
	@rm -f $(SRC)

fclean:
	@rm -f $(SRC)
	rm -f $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
