#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 21:52:10 by ylesik            #+#    #+#              #
#    Updated: 2018/10/01 21:52:11 by ylesik           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

FLAG = -Wall -Wextra -Werror

SRC = megaphone.cpp

RUN = clang++

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(RUN) -o $(NAME) $(OBJ)
	@ echo "Compiling" $(NAME)

%.o: %.cpp
	@ $(RUN) $(FLAG) -c -o $@ $<

clean:
	@ rm -rf $(OBJ)

fclean:
	@ rm -rf $(OBJ)
	@ rm -f $(NAME)

re: fclean all