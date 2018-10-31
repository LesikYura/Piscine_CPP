#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 22:36:57 by ylesik            #+#    #+#              #
#    Updated: 2018/10/02 22:36:57 by ylesik           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = zombie_horde

FLAG = -Wall -Wextra -Werror

SRC = Zombie.cpp \
ZombieHorde.cpp \
main.cpp \

RUN = clang++

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(RUN) -o $(NAME) $(OBJ)
	@ echo "compiling" $(NAME)

%.o: %.cpp
	@ $(RUN) $(FLAG) -c -o $@ $<

clean:
	@ rm -rf $(OBJ)

fclean:
	@ rm -rf $(OBJ)
	@ rm -f $(NAME)

re: fclean all
