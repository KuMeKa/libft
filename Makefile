# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/22 21:33:58 by unicolle          #+#    #+#              #
#    Updated: 2019/09/23 02:46:00 by unicolle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src:includes

NAME = libft.a

HEADER = 
INCLUDES = -I includes

C_FLASG = -g

OBJ_DIR = obj/

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_striter.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncpy.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c 

OBJ = $(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(SRC)))

all: $(NAME)

$(NAME):: $(OBJ_DIR)
$(NAME):: $(OBJ)
	@ar rc $@ $^
	@ranlib $@

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: %.c $(HEADER)
	gcc $(C_FLAGS) -o $@ -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all