# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/11/08 02:27:27 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(addsuffix .o, $(addprefix objs/, main encrypt key))

NAME = woody_woodpacker

all: objs $(NAME)

objs:
	mkdir objs

$(NAME): $(OBJS)
	make -C libft
	clang -o $(NAME) $(OBJS) libft/libft.a

objs/%.o: srcs/%.c
	clang -o $@ -c $< -I includes -I libft -Weverything

clean:
	make -C libft clean
	rm -rf objs
	rm -f woody

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all
