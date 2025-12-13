# Variables
NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# Source files
SRCS    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
          ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \

# Object files
OBJS    = $(SRCS:.c=.o)

# Rules
all: $(NAME)

# Create library archive
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

# Compile .c to .o
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove object files and library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
