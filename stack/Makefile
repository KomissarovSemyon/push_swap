# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/16 23:59:15 by amerlon-          #+#    #+#              #
#    Updated: 2019/02/17 00:42:41 by amerlon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libstack.a

OBJ_DIR = ./obj
INC_DIR = ./inc
SRC_DIR = ./src

SRC = stack_new.c

OBJS = $(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS) 
		@ar rcs $(NAME) $(OBJS)
		@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		gcc -g -Wall -Werror -Wextra -c $< -I$(INC_DIR) -o $@

clean:
		@rm -rf $(OBJ_DIR)

fclean: clean
		@rm -f $(NAME)

re: fclean all

norm:
		@norminette $(SRC_DIR) $(INC_DIR)

main:
		gcc -g -Iinc main.c libft.a && ./a.out

.PHONY: all clean fclean re norm