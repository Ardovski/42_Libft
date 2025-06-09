NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = ./

INC = -I includes

SRCS = $(wildcard $(SRCDIR)/*.c)

OBJS = $(patsubst %.c, %.o, $(SRCS))

RM = rm -f

TEST = test
MAIN = main.c

all: $(NAME) $(TEST)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(TEST): $(NAME) $(MAIN)
	$(CC) $(CFLAGS) $(INC) $(MAIN) $(NAME) -o $(TEST)

%.o: %.c includes/libft.h
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re