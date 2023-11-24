# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 14:32:40 by mpeulet           #+#    #+#              #
#    Updated: 2023/11/24 14:35:26 by mpeulet          ###   ########.fr        #
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

NAME			= BraiiiiiiinnnzzzZ
CC				= g++
FLAGS			= -Wall -Werror -Wextra -std=c++98
INCLUDES		= -I ./includes
RM				= rm -rf
VALGRINDCF		= valgrind valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FUNCTIONS	= main
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
					@echo "$(GREY)Compiling BraiiiiiiinnnzzzZ...$(DEF_COLOR)"
					@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES)
					@echo "$(GREEN)BraiiiiiiinnnzzzZ ready.$(DEF_COLOR)"

clean:
					@echo "$(MAGENTA)BraiiiiiiinnnzzzZ objects files cleaned!$(DEF_COLOR)"
					@$(RM) $(OBJ_DIR)
					
fclean:			clean
					@echo "$(RED)BraiiiiiiinnnzzzZ removed.$(DEF_COLOR)"
					@$(RM) $(NAME)

re:				fclean all
					@echo "$(BLUE)Cleaned and rebuilt everything for BraiiiiiiinnnzzzZ $(DEF_COLOR)"

vcf:			$(NAME)
					$(VALGRINDCF) ./$(NAME)

.PHONY: all clean fclean re vcf
