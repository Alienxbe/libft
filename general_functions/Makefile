# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 19:55:36 by mykman            #+#    #+#              #
#    Updated: 2021/08/27 15:31:23 by mykman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Black			=	\033[0;30m
Red				=	\033[0;31m
Green			=	\033[0;32m
Yellow			=	\033[0;33m
Blue			=	\033[0;34m
Purple			=	\033[0;35m
Cyan			=	\033[0;36m
White			=	\033[0;37m

SRCS			=	ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strlen.c \

					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c
SRCS_BONUS		=	ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c
SRCS_CUSTOMS	=	ft_intsize.c \
					ft_index.c \
					ft_pow.c \
					ft_padding.c

SRCS_CONDITIONS	=	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c
SRCS_LINKED_LST	=
SRCS_MATHS		=
SRCS_MEMORY		=
SRCS_PRINT		=
SRCS_STRING		=

OBJS			=	$(addprefix srcs/, ${SRCS:.c=.o})
OBJS_BONUS		=	$(addprefix srcs/, ${SRCS_BONUS:.c=.o})
OBJS_CUSTOMS	=	$(addprefix srcs/, ${SRCS_CUSTOMS:.c=.o})

NAME			=	libft.a

CC				=	@gcc
CFLAGS			=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}
	@echo "${YELLOW}Compilation of $<...${RESET}"

$(NAME):		${OBJS} ${OBJS_BONUS} ${OBJS_CUSTOMS}
	@ar -rcs $@ $^
	@echo "${GREEN}Library created !${RESET}"

all:			${NAME}

mandatory:		${OBJS}
	@ar -rcs ${NAME} ${OBJS}
	@echo "${BLUE}Mandatory part compiled !${RESET}"

bonus:			${OBJS_BONUS}
	@ar -rcs ${NAME} ${OBJS_BONUS}
	@echo "${BLUE}Bonus part compiled !${RESET}"

clean:
	@rm -f ${OBJS} ${OBJS_BONUS} ${OBJS_CUSTOMS}
	@echo "${PURPLE}Cleaning ojects.${RESET}"

fclean:
	@rm -f ${OBJS} ${OBJS_BONUS} ${OBJS_CUSTOMS}
	@rm -f ${NAME}
	@echo "${RED}Full clean.${RESET}"

re:				fclean all

.PHONY:			all mandatory bonus clean fclean re
