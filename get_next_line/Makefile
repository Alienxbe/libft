# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 00:40:39 by mykman            #+#    #+#              #
#    Updated: 2021/09/25 00:40:39 by mykman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
CC				=	@gcc
CFLAGS			=	-Wall -Wextra -Werror

RED				:=	\033[38;5;9m
GREEN			:=	\033[38;5;10m
BLUE			:= 	\033[38;5;14m
YELLOW			:=	\033[38;5;226m
RESET			:=	\033[38;5;7m
PREFIX			=	[${YELLOW}${FT}${RESET}]\t\t\t

# FILES
LIBFT_FOLDER	:=	../general_functions/
MAKE_GENERAL	:=	@make --no-print-directory -C ${LIBFT_FOLDER}
FT				:=	get_next_line
NAME			:=	${FT}.a

SRCS			:=	get_next_line.c
OBJS			:=	$(addprefix srcs/, ${SRCS:.c=.o})

# RULES
%.o:			%.c
	${CC} ${CFLAGS} -c -I../includes $< -o ${<:.c=.o}
	@echo "${PREFIX}Compilation of ${subst srcs/,,$<}..."

$(NAME):		${OBJS}
	${MAKE_GENERAL} NAME=../get_next_line/$@
	@ar -rcs $@ $^
	@echo "${PREFIX}${GREEN}Library created !${RESET}"

all:			${NAME}

clean:
	${MAKE_GENERAL} clean
	@rm -f ${OBJS}
	@echo "${PREFIX}${BLUE}Cleaning ojects.${RESET}"

fclean:
	${MAKE_GENERAL} fclean
	@rm -f ${OBJS} ${NAME}
	@echo "${PREFIX}${RED}Full clean.${RESET}"

re:				fclean all

.PHONY:			all clean fclean re