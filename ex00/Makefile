# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 09:00:02 by athonda           #+#    #+#              #
#    Updated: 2025/04/21 12:38:02 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC_DIR = src
SRC_F	=	Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
			main.cpp

SRC = $(SRC_F:%.c=%.c)

OBJ_DIR = obj
OBJ =	$(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_F))

INC_DIR = inc
DEP = $(wildcard $(patsubst %.cpp,%.hpp,$(SRC_F)))

IFLAGS = -Iinc
CFLAGS = -g -std=c++98 -Wall -Werror -Wextra
CC = c++

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(DEP)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

re: fclean all
