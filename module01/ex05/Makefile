# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 16:08:37 by mpeulet           #+#    #+#              #
#    Updated: 2023/11/28 16:47:35 by mpeulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Colors / base 16 / Bright

DEF_COLOR		= \033[0;39m
GREY			= \033[0;90m
RED				= \033[0;91m
GREEN			= \033[0;92m
YELLOW			= \033[0;93m
BLUE			= \033[0;94m
MAGENTA			= \033[0;95m
CYAN			= \033[0;96m
WHITE			= \033[0;97m
ORANGE			= \033[38;5;214m

NAME			= Harl_2.0
CC				= g++
FLAGS			= -Wall -Werror -Wextra -std=c++98
INCLUDES		= -I ./includes
RM				= rm -rf
VALGRINDCF		= valgrind valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FUNCTIONS	= main Harl
OBJ_DIR			= obj/
SRC_DIR			= src/
SRC				= $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FUNCTIONS)))
OBJ				= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FUNCTIONS)))

IFMAKE_DIR		= .cache_exists

all:			$(NAME)

$(IFMAKE_DIR):
					@mkdir -p $(OBJ_DIR)
					
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(IFMAKE_DIR)
					@echo "$(ORANGE)Loading... $< $(DEF_COLOR)"
					@$(CC) $(FLAGS) -c $< -o $@ $(INCLUDES)
					
$(NAME):		$(OBJ)
					@echo "$(GREY)Compiling Harl_2.0!...$(DEF_COLOR)"
					@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES)
					@echo "$(GREEN)Harl_2.0! ready.$(DEF_COLOR)"

clean:
					@echo "$(MAGENTA)Harl_2.0! objects files cleaned!$(DEF_COLOR)"
					@$(RM) $(OBJ_DIR)
					@$(RM) *.replace
					
fclean:			clean
					@echo "$(RED)Harl_2.0! removed.$(DEF_COLOR)"
					@$(RM) $(NAME)

re:				fclean all
					@echo "$(BLUE)Cleaned and rebuilt everything for Harl_2.0! $(DEF_COLOR)"

vcf:			$(NAME)
					$(VALGRINDCF) ./$(NAME)

.PHONY: all clean fclean re vcf
