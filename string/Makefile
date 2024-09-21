LIB			= ft_string.a
HEADER	= ft_string.h
FLAGS		= -Wall -Wextra -Werror
SRCS		= $(wildcard ./ft_*.c)
OBJS		= $(SRCS:.c=.o)

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

clean:
	rm -rf ./*.o

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@
	
fclean: clean
	rm -rf $(LIB)

re: fclean all
