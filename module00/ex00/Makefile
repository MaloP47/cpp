# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 15:18:13 by mpeulet           #+#    #+#              #
#    Updated: 2023/11/29 12:05:02 by mpeulet          ###   ########.fr        #
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

NAME			= megaphone
CC				= c++
FLAGS			= -Wall -Werror -Wextra -std=c++98
RM				= rm -rf

SRC_FUNCTIONS	= megaphone
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
					@$(CC) $(FLAGS) -c $< -o $@
					
$(NAME):		$(OBJ)
					@echo "$(GREY)Compiling megaphone...$(DEF_COLOR)"
					@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
					@echo "$(GREEN)megaphone ready.$(DEF_COLOR)"

clean:
					@echo "$(MAGENTA)megaphone objects files cleaned!$(DEF_COLOR)"
					@$(RM) $(OBJ_DIR)
					
fclean:			clean
					@echo "$(RED)megaphone removed.$(DEF_COLOR)"
					@$(RM) $(NAME)

re:				fclean all
					@echo "$(BLUE)Cleaned and rebuilt everything for megaphone$(DEF_COLOR)"

.PHONY: all clean fclean re
