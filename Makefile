NAME = push_swap
CHECKER = checker
HEADER = push_swap.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	src/main.c\
		src/sort_stack.c\
		src/rotate_push_atob.c\
		src/rotate_push_btoa.c\
		src/min_max.c\
		src/atob_btoa.c\
		src/index.c\
		src/best_rotate_option_ab.c\
		src/best_rotate_option_ba.c\
		utils/check_args.c\
		utils/fill_stack.c\
		utils/free_stack.c\
		ops/push.c\
		ops/swap.c\
		ops/rotate.c\
		ops/reverse_rotate.c

SRCS_BONUS =	src_bonus/main_bonus.c\
				src_bonus/instruction_utils.c\
				src_bonus/ft_checker.c\
				utils_bonus/check_args_bonus.c\
				utils_bonus/fill_stack_bonus.c\
				utils_bonus/free_stack_bonus.c\
				ops_bonus/push_bonus.c\
				ops_bonus/swap_bonus.c\
				ops_bonus/rotate_bonus.c\
				ops_bonus/reverse_rotate_bonus.c\
				gnl/get_next_line.c\
				gnl/get_next_line_utils.c

all: ft_printf libft $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -L Ft_printf -lftprintf -L Libft -l:libft.a -o $(NAME)

bonus: ft_printf libft $(CHECKER)

$(CHECKER):
	$(CC) $(CFLAGS) $(SRCS_BONUS) -L Ft_printf -lftprintf -L Libft -l:libft.a -o $(CHECKER)

ft_printf:
	make -C Ft_printf

libft:
	make -C Libft

clean:
	make -C Ft_printf clean
	make -C Libft clean

fclean:
	rm -f $(NAME)
	make -C Ft_printf fclean
	make -C Libft fclean

fclean_bonus:
	make -C Ft_printf fclean
	make -C Libft fclean
	rm -f $(CHECKER)

re:
	make fclean all

.PHONY: ft_printf libft all clean fclean re bonus fclean_bonus
