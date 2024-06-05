HEADER = libft.h
NAME = libft.a
CC = cc
CCA = ar rcs
CFLAGS = -Wall -Wextra -Werror
OFILES = ${SRCS:.c=.o}
SRCS = 	ft_isdigit.c\
		ft_strlen.c\
		ft_atoi.c\
		ft_strdup.c\
		ft_substr.c\
		ft_split.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

all: $(NAME)

$(NAME): $(OFILES)
	$(CCA) $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	@rm -f $(OFILES)
	@echo "ran clean"

fclean:
	@rm -f $(NAME) $(OFILES)
	@echo "ran fclean"

re: fclean all

.PHONY: clean all fclean re
