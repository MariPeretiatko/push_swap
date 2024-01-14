# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 00:59:57 by mperetia          #+#    #+#              #
#    Updated: 2023/12/01 21:55:55 by mperetia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

CC =	gcc

CFLAGS =	-Wall -Werror -Wextra

SRC = 	ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c\
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstiter.c 
# ft_lstmap.c
# ft_atoi.c 
# ft_lstadd_back.c 
# ft_lstclear.c 

OBJ =	$(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $? 
	@ranlib $(NAME)
	@echo "create library"
	
%.o: %.c
	$(CC) $(CFLAGS) -c $?
	@echo "compile c-files"
	
clean:
	@rm -f $(OBJ)
	@echo "clean object files"

fclean: clean
	@rm -f $(NAME)
	@echo "clean library"

re: fclean all
	@echo "recompile library"

.PHONY: re fclean clean all bonus