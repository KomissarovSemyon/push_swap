# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 05:01:06 by amerlon-          #+#    #+#              #
#    Updated: 2019/02/17 06:44:7 by amerlon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap
NAME_PS			= push_swap
NAME_CHECKER	= checker
FLAGS			= -Wall -Werror -Wextra

LIBFT_DIR		= ./libft
SRC_DIR 		= ./src
INC_DIR 		= ./inc
OBJ_DIR 		= ./obj

SRC				=	parse_input.c \
					quick_sort.c \
					stacks.c \
					stacks_ops1.c \
					stacks_ops2.c \
					stacks_ops3.c \
					sort_stacks.c \
					sort_last_a.c \
					sort_last_b.c \
					parse_commands.c \
					sort_small.c

PUSH_SWAP		=	ps_main.c
CHECKER			=	checker_main.c

OBJS			= $(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))
PUSH_SWAP_OBJ	= $(addprefix $(OBJ_DIR)/,$(PUSH_SWAP:%.c=%.o))
CHECKER_OBJ		= $(addprefix $(OBJ_DIR)/,$(CHECKER:%.c=%.o))
LIBFT			= $(LIBFT_DIR)/libft.a

all: $(NAME)

$(OBJ_DIR):
	@echo "\033[33mMaking binaries\033[0m"
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS) $(PUSH_SWAP_OBJ) $(CHECKER_OBJ)
	@echo "\033[33mCompiling ./push_swap\033[0m"
	@gcc -g $(LIBFT) $(FLAGS) $(OBJS) $(PUSH_SWAP_OBJ) -o $(NAME_PS)
	@echo "\033[33mCompiling ./checker\033[0m"
	@gcc -g $(LIBFT) $(FLAGS) $(OBJS) $(CHECKER_OBJ) -o $(NAME_CHECKER)
	@echo "\033[31mFinished building project\033[0m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@gcc -g $(FLAGS) -c $< -I$(INC_DIR) -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[33mDeleting project binaries\033[0m"
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME_PS)
	@rm -rf $(NAME_CHECKER)
	@echo "\033[33mDeleting project\033[0m"
	@make -C libft fclean

re: fclean all

norm:
	@make -C libft norm
	@norminette $(SRC_DIR) $(INC_DIR)

.PHONY: all clean fclean re norm
