# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbradel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/13 12:58:45 by gbradel           #+#    #+#              #
#    Updated: 2016/12/14 22:12:58 by gbradel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Werror -Wextra
SRC = ft_error.c ft_nextispoint.c fillit.c ft_delete_lettre.c \
		ft_findtheplace.c ft_sizesquare.c ft_nbr_res.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	make -C Libft
	gcc -o $(NAME) $(FLAGS) $(OBJ) main.c Libft/Libft.a

clean:
	rm -rf $(OBJ)
	make clean -C Libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C Libft

re: fclean all

all: $(NAME)
