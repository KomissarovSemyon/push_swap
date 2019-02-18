# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/16 23:59:15 by amerlon-          #+#    #+#              #
#    Updated: 2019/02/18 10:05:55 by semyonkomis      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libstack.a

OBJ_DIR = ./obj
INC_DIR = ./inc
SRC_DIR = ./src

SRC =	stack_new.c \
		stack_delone.c \
		stack_del.c \
		stack_push.c \
		stack_create.c \
		stack_pop.c \
		stack_pushback.c

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

.PHONY: all clean fclean re norm