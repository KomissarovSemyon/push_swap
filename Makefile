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
SRC_DIR 	= ./src
INC_DIR 	= ./inc
OBJ_DIR 	= ./obj

SRC			=	ps_main.c \
				parse_input.c \
				quick_sort.c \
				stacks.c \
				stacks_ops1.c \
				stacks_ops2.c \
				stacks_ops3.c \
				sort_3.c

OBJS		= $(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))
LIBFT		= $(LIBFT_DIR)/libft.a

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS)
	gcc -g $(LIBFT)  $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -g $(FLAGS) -c $< -I$(INC_DIR) -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean

re: fclean all

norm:
	@make -C libft norm
	@norminette $(SRC_DIR) $(INC_DIR)

.PHONY: all clean fclean re norm
