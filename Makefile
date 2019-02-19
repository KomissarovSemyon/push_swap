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

NAME		= push_swap
FLAGS		= -Wall -Werror -Wextra

LIBFT_DIR	= ./libft
STACK_DIR	= ./stack
SRC_DIR 	= ./src
INC_DIR 	= ./inc
OBJ_DIR 	= ./obj

SRC			=	operations.c \
				ps_main.c \
				data_preprocessing.c \
				quick_sort.c \
				ps_operations_push_and_swaps.c \
				ps_operations_rotate.c \
				ps_operations_rev_rotate.c

OBJS		= $(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))
LIBFT		= $(LIBFT_DIR)/libft.a
STACK		= $(STACK_DIR)/libstack.a

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@make -C libft

$(STACK):
	@make -C stack

$(NAME): $(LIBFT) $(STACK) $(OBJ_DIR) $(OBJS)
	gcc -g $(LIBFT) $(STACK) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -g $(FLAGS) -c $< -I$(INC_DIR) -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@make -C libft clean
	@make -C stack clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean
	@make -C stack fclean

re: fclean all

norm:
	@make -C libft norm
	@make -C stack norm
	@norminette $(SRC_DIR) $(INC_DIR)

.PHONY: all clean fclean re norm
