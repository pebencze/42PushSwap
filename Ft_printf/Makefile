NAME = libftprintf.a
HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar rcs
SRCS = 	ft_printf.c\
		utils/ft_aux_putchar.c\
		utils/ft_aux_puthex.c\
		utils/ft_aux_putnbr.c\
		utils/ft_aux_putptr.c\
		utils/ft_aux_putstr.c\
		utils/ft_aux_putunsigned.c

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
