# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: timvancitters <timvancitters@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/14 12:42:41 by timvancitte   #+#    #+#                  #
#    Updated: 2021/01/15 13:07:56 by timvancitte   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01m"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
BL = "\x1b[34;01m"
NO = "\x1b[0m"

NAME = replace

SRCS = Replace.Class.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++03 -pedantic

CMPL = clang++

all: $(NAME)

$(NAME):
	@echo $(YL)Compiling: $(SRCS)$(NO)
	@$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(GR)Compiled $(NAME) Succesfully$(NO)
	
clean:
	
fclean: 
	@rm -f $(NAME)
	@echo $(RD)Removed Executablen: $(NAME)$(NO)

re: fclean all