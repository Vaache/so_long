NAME	= so_long

SRC_DIR = src

SRC = $(wildcard $(SRC_DIR)/*.c)

OBJ_DIR	= obj

OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

CC		= cc
HEADER	= $(wildcard ./includes/*.h)
INCLUDE	= -Iincludes
CFLAGS	= -Wall -Wextra -Werror $(INCLUDE)  #-g3 #-fsanitize=address
MK		= mkdir -p
IMLX	= -Imlx
MLX		= -lmlx -framework OpenGL -framework AppKit

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) $(IMLX) -c $< -o $@

$(OBJ_DIR):
	$(MK) $(OBJ_DIR)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(MLX) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re