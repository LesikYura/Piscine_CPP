#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 21:30:45 by ylesik            #+#    #+#              #
#    Updated: 2018/10/03 21:30:46 by ylesik           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = easyfind

FLAG = -Wall -Wextra -Werror

SRC = main.cpp\

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
