
export green=`tput setaf 2`

NAME = push_swap

SRC_DIR		=	src
SRCS 		=   $(SRC_DIR)/main.c \
				$(SRC_DIR)/get_info.c \
				$(SRC_DIR)/list.c\
				$(SRC_DIR)/modify_list.c\
				$(SRC_DIR)/push_operation.c\
				$(SRC_DIR)/rev_rotate_operation.c\
				$(SRC_DIR)/rotate_operation.c\
				$(SRC_DIR)/simple_sort.c\
				$(SRC_DIR)/swap_operation.c\
				$(SRC_DIR)/sort_list.c\
				$(SRC_DIR)/utils.c\
				$(SRC_DIR)/utils2.c

# SRCS =  $(wildcard src/*.c)
OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

RM = rm -rf

all: ${NAME} 

${NAME}: ${OBJS}
	@${MAKE} -C inc/libft
	@${MAKE} -C inc/ft_printf
	@${CC} ${CFLAGS} ${OBJS} inc/libft/libft.a inc/ft_printf/libftprintf.a  -o ${NAME}
	@echo "${green}OK main part${reset}"



clean: 
	@${MAKE} -C inc/libft fclean
	@${MAKE} -C inc/ft_printf fclean
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re