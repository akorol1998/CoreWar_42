# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akorol <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/19 16:52:16 by akorol            #+#    #+#              #
#    Updated: 2019/03/22 13:18:17 by akorol           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =   ft_bzero.c \
        ft_memset.c \
        ft_memcpy.c\
        ft_memccpy.c \
        ft_memmove.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_putchar.c \
        ft_strlen.c \
        ft_strdup.c \
		ft_strndup.c\
        ft_strcpy.c \
        ft_strncpy.c \
        ft_strcat.c \
        ft_strncat.c \
        ft_strlcat.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strstr.c \
        ft_strnstr.c \
        ft_strcmp.c \
        ft_strncmp.c \
        ft_atoi.c \
		ft_islower.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_memalloc.c \
        ft_memdel.c \
        ft_strnew.c \
        ft_strdel.c \
        ft_strclr.c \
        ft_striter.c \
        ft_striteri.c \
        ft_strmap.c \
        ft_strmapi.c \
        ft_strequ.c \
        ft_strnequ.c \
        ft_strsub.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_itoa.c \
        ft_strsplit.c \
        ft_putstr.c \
        ft_putendl.c \
        ft_putnbr.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_lstnew.c \
        ft_lstdelone.c \
        ft_lstdel.c \
        ft_lstadd.c \
        ft_lstiter.c \
        ft_lstmap.c \
		get_next_line.c \
		ft_add_break.c \
		ft_min.c \
		ft_max.c \
		space_tab_split.c \
		coma_hash_split.c \
		char_join.c \
		copy_till_end.c \
		coma_space_tab_split.c \

CFLAGS = -Wextra -Wall -Werror

LIBFT = ar -rc

HEADER = libft.h

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(LIBFT) $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):%.o:%.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

