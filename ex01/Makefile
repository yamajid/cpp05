# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 15:21:23 by yamajid           #+#    #+#              #
#    Updated: 2024/03/02 23:39:59 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	Bureaucrat
Run		=	c++ -g
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	Bureaucrat.cpp main.cpp Form.cpp

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(otherS)
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all