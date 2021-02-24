# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: timvancitters <timvancitters@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:31:04 by timvancitte   #+#    #+#                  #
#    Updated: 2021/02/24 10:31:24 by timvancitte   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01m"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
BL = "\x1b[34;01m"
NO = "\x1b[0m"

NAME = iter

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++03 -pedantic

CMPL = clang++

all: $(NAME)

$(NAME):
	@echo $(YL)----------------------------------------------------
	@echo $(YL)Compiling: 
	$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(YL)----------------------------------------------------
	@echo $(GR)Compiled $(NAME) Succesfully$(NO)
	@echo $(GR)----------------------------------------------------
	@echo "\n";
	@echo $(GR)----------------------------------------------------
	@echo Executable			./iter
	@echo $(GR)----------------------------------------------------$(NO)
	
clean:
	@echo $(RD)----------------------------------------------------
	@rm -f $(NAME)
	@echo $(RD)Removed Executables: $(NAME)$(NO)
	@echo $(RD)----------------------------------------------------$(NO)
	
fclean: clean

re: fclean all