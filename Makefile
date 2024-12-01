# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 12:49:15 by rrimonte          #+#    #+#              #
#    Updated: 2024/11/01 10:19:16 by rrimonte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = cub3D

SRC =	src/main.c \
		src/parsing/parse.c \
		src/parsing/wall_error.c \
		src/parsing/map_stat.c \
		src/parsing/utils.c \
		src/parsing/parse_rgb_texture.c \
		src/free.c \
		src/game/init_game.c \
		src/game/key_events.c \
		src/game/moves.c \
		src/raycasting/utils.c \
		src/raycasting/raycasting.c \
		src/raycasting/draw.c \
		src/raycasting/render.c \

OBJ = $(SRC:.c=.o)

CC = cc

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I/usr/include -Imlx_linux -g3 -O3 -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	make -C mlx_linux
	make -C libft
	$(CC) $(OBJ) -Llibft -lft -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean:
	rm -rfv $(OBJ)
	make clean -C mlx_linux
	make clean -C libft

fclean: clean
	rm -rfv $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re