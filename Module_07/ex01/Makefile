# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: timvancitters <timvancitters@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:31:04 by timvancitte   #+#    #+#                  #
#    Updated: 2021/02/25 14:02:20 by timvancitte   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD 		= "\x1b[31;01m"
GR		 = "\x1b[32;01m"
YL 		= "\x1b[33;01m"
BL 		= "\x1b[34;01m"
GREY 	= "\x1b[38;5;8m"
NO 		= "\x1b[0m"

NAME 	= iter

SRCS 	= main.cpp

OBJECTS	= $(subst .c,.o, $(SRC))

FLAGS 	= -Wall -Wextra -Werror -std=c++03 -pedantic

CMPL 	= clang++

all: $(NAME)

$(NAME):
	@echo $(GREY)Compiling...				$(GREY)$<
	$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(GREY)Compiled $(NAME) Succesfully$(NO)
	@echo $(GR)---------------------------------------------------------------------------------
	@echo $(GR)"Executable                     	      			  ./iter"$(NO)
	
clean:
	@echo $(YL)---------------------------------------------------------------------------------$(NO)
	@$(RM) -rf $(OBJECTS)
	@echo $(YL)Deleted objects $(OBJECTS) $(NO)
	@echo $(YL)---------------------------------------------------------------------------------$(NO)
	
fclean: clean
		@echo $(RD)---------------------------------------------------------------------------------
		@rm -f $(NAME)
		@echo $(RD)Removed Executables: $(NAME)$(NO)
		@echo $(RD)---------------------------------------------------------------------------------$(NO)

re: fclean all