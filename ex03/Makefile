# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 22:32:57 by hurabe            #+#    #+#              #
#    Updated: 2024/12/30 22:36:30 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -rf

INCS		=	-I includes/
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/
SRCS_FILES	=	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS		=	$(patsubst $(SRCS_DIR)%.cpp, $(OBJS_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) $(OBJS) -o $@

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean:
	$(RM) $(OBJS_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re