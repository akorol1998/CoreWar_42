# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akorol <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/06 13:30:40 by akorol            #+#    #+#              #
#    Updated: 2019/07/06 13:30:42 by akorol           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = asm

SRC = main.c \
fill_structures.c \
read_name.c \
read_comment.c \
read_instructions.c \
help_functions.c \
help_functions_2.c \
op_check.c \
label_check.c \
comment_check.c \
store_index.c \
store_index_2.c \
store_index_3.c \
live_op.c \
delete_comments.c \
load.c \
buf_manager.c \
line_manipulation.c \

FLAGS = -Wall -Wextra -Werror

LIB = libft/libftprintf.a

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	gcc -o $@ $(OBJ) $(LIB)

$(OBJ):%.o:%.c
	gcc $(FLAGS) -c $< -o $@

$(LIB):
	make -C libft

clean:
	make clean -C libft
	rm -f *.o

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all