# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 16:31:03 by mvolkman          #+#    #+#              #
#    Updated: 2024/02/08 11:05:30 by mvolkman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files for ft_printf
SRC = ft_printf.c \
	ft_printf_helper.c

# Object files
OBJ = $(SRC:.c=.o)

# Library directories and flags for libft
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# Include directories for ft_printf and libft
INCLUDES = -I$(LIBFT_DIR)

# Output library name
NAME = libftprintf.a

# Colors used for terminal output.
GREEN = \033[0;32m
BLUE = \033[0;34m
ORANGE = \033[38;5;214m
RED = \033[0;31m
YELLOW = \033[0;33m
WHITE = \033[0;37m

# Rules
all: $(NAME)
	@echo "$(GREEN)$(NAME) compiled successfully!$(WHITE)"

$(NAME): $(OBJ) $(LIBFT)
	@echo "$(BLUE)Building $(NAME)$(WHITE)"
	$(AR) rcs $(NAME) $(OBJ) $(LIBFT_DIR)/*.o
	@echo "$(GREEN)$(NAME) created successfully!$(WHITE)"

$(LIBFT):
	@echo "$(BLUE)Building $(LIBFT)$(WHITE)"
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)
	@echo "$(ORANGE)Compiled $< successfully!$(WHITE)"

clean:
	@echo "$(RED)Cleaning object files...$(WHITE)"
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	@echo "$(RED)Cleaning binaries...$(WHITE)"
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
