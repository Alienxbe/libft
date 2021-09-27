# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 20:00:35 by mykman            #+#    #+#              #
#    Updated: 2021/09/27 17:33:05 by mykman           ###   ########.fr        #
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
PREFIX			=	[${YELLOW}${FT}${RESET}]\t\t


# FILES
LIBFT			:=	./libft
MAKE_GENERAL	:=	@make --no-print-directory -C ${LIBFT}
FT				:=	libftprintf
NAME			:=	${FT}.a

SRCS			:=	ft_printf.c \
					ft_create_tag.c \
					ft_print_type.c \
					ft_type_c.c \
					ft_type_s.c \
					ft_type_d.c \
					ft_type_ubase.c \
					ft_type_pct.c
OBJS			:=	$(addprefix srcs/, ${SRCS:.c=.o})

# RULES
%.o:			%.c
	${CC} ${CFLAGS} -c -I../includes $< -o ${<:.c=.o}
	@echo "${PREFIX}Compilation of ${subst srcs/,,$<}..."

$(NAME):		${OBJS}
	@make NAME=../${NAME} -C ${LIBFT}
	@ar -rcs $@ $^

all:		${NAME}

bonus:		all

clean:
	@rm -rf ${OBJS} ${OBJS_UTILS}
	@make clean -C ${LIBFT}

fclean:		clean
	@rm -rf ${NAME}
	@make fclean -C ${LIBFT}

re:			fclean all

.PHONY:		all clean fclean re
