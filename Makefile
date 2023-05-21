# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 17:40:21 by aakhtab           #+#    #+#              #
#    Updated: 2023/05/21 02:11:03 by aakhtab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=====COLORS=====#
RESET	= \033[0m
GRAY		= \033[0;90m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
RED			= \033[0;31m
PURPLE		= \033[0;35m
S1			= "=================================================================================="

CC			=	cc

SRCS			=	src/main.c src/fill.c src/check_err.c 

OBJS			=	$(SRCS:.c=.o)

CFLAGS			=	-Wall -Wextra -Werror 
#-g -fsanitize=address

NAME			=	push_swap

LIBFT		= lib/libft.a


all:	${NAME}


${NAME}:	$(LIBFT) ${OBJS} header
			@$(CC) $(CFLAGS) $(SRCS) lib/libft.a -o $(NAME)


$(LIBFT)	:
	@make -C lib

##---- need to modier----------
%.o	: %.c
	@${CC} ${CFLAGS} -c $< -o $@
##-----------------------------

clean:	
			@make clean -C lib
			@rm -f $(OBJS)
			@printf "$(YELLOW)\r    [OBJECTS CLEANED 🗑️$(RESET)"

fclean:	clean
			@make fclean -C lib
			@rm -f ${NAME}
			@printf "\r												"
			@printf "$(RED)\r     [EVERYTHING CLEANED 👌]    \n$(RESET)"
			
re:	fclean all

header :
	@printf "$(PURPLE)$(S1)\n"
	@printf "=                                                                                =\n"
	@printf "=    ██▓███   █    ██   ██████  ██░ ██   ██████  █     █░ ▄▄▄       ██▓███    	 =\n"
	@printf "=    ▓██░  ██▒ ██  ▓██▒▒██    ▒ ▓██░ ██▒▒██    ▒ ▓█░ █ ░█░▒████▄    ▓██░  ██▒	 =\n"
	@printf "=    ▓██░ ██▓▒▓██  ▒██░░ ▓██▄   ▒██▀▀██░░ ▓██▄   ▒█░ █ ░█ ▒██  ▀█▄  ▓██░ ██▓▒ 	 =\n"
	@printf "=    ▒██▄█▓▒ ▒▓▓█  ░██░  ▒   ██▒░▓█ ░██   ▒   ██▒░█░ █ ░█ ░██▄▄▄▄██ ▒██▄█▓▒ ▒	 =\n"
	@printf "=    ▒██▒ ░  ░▒▒█████▓ ▒██████▒▒░▓█▒░██▓▒██████▒▒░░██▒██▓  ▓█   ▓██▒▒██▒ ░  ░	 =\n"
	@printf "=    ▒▓▒░ ░  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒▒ ▒▓▒ ▒ ░░ ▓░▒ ▒   ▒▒   ▓▒█░▒▓▒░ ░  ░	 =\n"
	@printf "=    ░▒ ░     ░░▒░ ░ ░ ░ ░▒  ░ ░ ▒ ░▒░ ░░ ░▒  ░ ░  ▒ ░ ░    ▒   ▒▒ ░░▒ ░     	 =\n"
	@printf "=    ░░        ░░░ ░ ░ ░  ░  ░   ░  ░░ ░░  ░  ░    ░   ░    ░   ▒   ░░       	 =\n"
	@printf "$(PURPLE)=									FINISHED =\n"
	@printf "$(S1)$(RESET)\n"
	
.PHONY: all clean fclean re

