NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = $(FILES:.c=.o)

FILES = fonction.c\
		ft_atoi.c\
		ft_split.c\
		function1.c\
		listedfunction.c\
		main.c\
		checker.c\

%.o : %.c
	$(CC) $(CFLAGS) -c $(FILES)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(SRC)

fclean:
	@rm -f $(SRC)
	rm -f $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
