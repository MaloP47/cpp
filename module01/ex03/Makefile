# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 15:18:16 by mpeulet           #+#    #+#              #
#    Updated: 2024/03/08 11:20:57 by mpeulet          ###   ########.fr        #
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

NAME			= Unnecessary_violence
CC				= c++
FLAGS			= -Wall -Werror -Wextra -std=c++98
INCLUDES		= -I ./includes
RM				= rm -rf
VALGRINDCF		= valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FUNCTIONS	= main HumanA HumanB Weapon
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
					@echo "$(GREY)Compiling Unnecessary_violence!...$(DEF_COLOR)"
					@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES)
					@echo "$(GREEN)Unnecessary_violence! ready.$(DEF_COLOR)"

clean:
					@echo "$(MAGENTA)Unnecessary_violence! objects files cleaned!$(DEF_COLOR)"
					@$(RM) $(OBJ_DIR)
					
fclean:			clean
					@echo "$(RED)Unnecessary_violence! removed.$(DEF_COLOR)"
					@$(RM) $(NAME)

re:				fclean all
					@echo "$(BLUE)Cleaned and rebuilt everything for Unnecessary_violence! $(DEF_COLOR)"

vcf:			$(NAME)
					$(VALGRINDCF) ./$(NAME)

.PHONY: all clean fclean re vcf
