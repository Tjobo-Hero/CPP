# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: timvancitters <timvancitters@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/16 13:26:31 by timvancitte   #+#    #+#                  #
#    Updated: 2021/02/17 13:34:00 by timvancitte   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01m"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
BL = "\x1b[34;01m"
NO = "\x1b[0m"

NAME = convert

SRCS = main.cpp Convert.cpp 

FLAGS = -Wall -Wextra -Werror -std=c++03 -pedantic

CMPL = clang++

all: $(NAME)

$(NAME):
	@echo $(YL)Compiling: $(SRCS)$(NO)
	@$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(GR)Compiled $(NAME) Succesfully$(NO)
	
clean:
	@rm -f $(NAME)
	@echo $(RD)Removed Executables: $(NAME)$(NO)
	
fclean: clean

re: fclean all