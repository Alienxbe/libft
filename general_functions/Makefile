# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 19:55:36 by mykman            #+#    #+#              #
#    Updated: 2021/08/29 10:19:27 by anonymous        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
CC			=	@gcc
CFLAGS		=	-Wall -Wextra -Werror

RED			:=	\e[38;5;9m
GREEN		:=	\e[38;5;10m
BLUE		:= 	\e[38;5;14m
YELLOW		:=	\e[38;5;226m
RESET		:=	\e[38;5;7m

# FILES
FT			:=	libft
NAME		:=	${FT}.a

SRCS_CTYPE	:=	ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c
SRCS_LIST	:=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
SRCS_MATH	:=	ft_pow.c
SRCS_MEMORY	:=	ft_bzero.c \
				ft_calloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c
SRCS_STDIO	:=	ft_padding.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c
SRCS_STRING	:=	ft_atoi.c \
				ft_index.c \
				ft_intsize.c \
				ft_itoa.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \

OBJS		:=	$(addprefix srcs/ft_ctype/, ${SRCS_CTYPE:.c=.o})
OBJS		+=	$(addprefix srcs/ft_list/, ${SRCS_LIST:.c=.o})
OBJS		+=	$(addprefix srcs/ft_math/, ${SRCS_MATH:.c=.o})
OBJS		+=	$(addprefix srcs/ft_memory/, ${SRCS_MEMORY:.c=.o})
OBJS		+=	$(addprefix srcs/ft_stdio/, ${SRCS_STDIO:.c=.o})
OBJS		+=	$(addprefix srcs/ft_string/, ${SRCS_STRING:.c=.o})

# RULES
%.o:		%.c
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}
	@echo "[${YELLOW}${FT}${RESET}]\t\tCompilation of ${subst srcs/,,$<}..."

$(NAME):	${OBJS}
	@ar -rcs $@ $^
	@echo "${GREEN}Library created !${RESET}"

all:		${NAME}

clean:
	@rm -f ${OBJS}
	@echo "${BLUE}Cleaning ojects.${RESET}"

fclean:
	@rm -f ${OBJS} ${NAME}
	@echo "${RED}Full clean.${RESET}"

re:			fclean all

.PHONY:		all clean fclean re
