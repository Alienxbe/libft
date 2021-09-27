# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 19:55:36 by mykman            #+#    #+#              #
#    Updated: 2021/09/24 18:14:55 by mykman           ###   ########.fr        #
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

# VARIABLES
FT				:=	libft
FT_STD			:=	libftstd
FT_PRINTF		:=	libftprintf
FT_GNL			:=	libftgnl
NAME			:=	${FT}.a
NAME_STD		:=	${FT_STD}.a
NAME_PRINTF		:=	${FT_PRINTF}.a
NAME_GNL		:=	${FT_GNL}.a

FOLDER_STD		:=	srcs/general_functions/
FOLDER_GNL		:=	srcs/get_next_line/
FOLDER_PRINTF	:=	srcs/ft_printf/

# FILES

SRCS_CTYPE		:=	ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c
SRCS_LIST		:=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
SRCS_MATH		:=	ft_pow.c
SRCS_MEMORY		:=	ft_bzero.c \
				ft_calloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_ternary.c
SRCS_STDIO		:=	ft_padding.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c
SRCS_STRING		:=	ft_atoi.c \
				ft_ctoa.c \
				ft_index.c \
				ft_intsize.c \
				ft_itoa.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdiv.c \
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
				ft_usize_base.c \
				ft_utoa_base.c
SRCS_PRINTF		:=	ft_printf.c \
				ft_create_tag.c \
				ft_print_type.c \
				ft_type_c.c \
				ft_type_s.c \
				ft_type_d.c \
				ft_type_ubase.c \
				ft_type_pct.c
SRCS_GNL		:=	get_next_line.c

OBJS_STD		:=	$(addprefix ${FOLDER_STD}ft_ctype/, ${SRCS_CTYPE:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_list/, ${SRCS_LIST:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_math/, ${SRCS_MATH:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_memory/, ${SRCS_MEMORY:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_stdio/, ${SRCS_STDIO:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_string/, ${SRCS_STRING:.c=.o})
OBJS_PRINTF		:=	$(addprefix ${FOLDER_PRINTF}, ${SRCS_PRINTF:.c=.o})
OBJS_GNL		:=	$(addprefix ${FOLDER_GNL}, ${SRCS_GNL:.c=.o})
OBJS			:=	${OBJS_STD} ${OBJS_PRINTF} ${OBJS_GNL}

# RULES
%.o:			%.c
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}
	@echo "${PREFIX}Compilation of $<..."

$(NAME):		${OBJS}
	@ar -rcs $@ $^
	@echo "${PREFIX}${GREEN}Library created !${RESET}

all:			${NAME}

libftstd:
	@make all -s FT=${FT_STD} OBJS=${OBJS_STD}

libftprintf:
	@make all -s FT=${FT_PRINTF} OBJS="${OBJS_STD} ${OBJS_PRINTF}"

libftgnl:
	@make all -s FT=${FT_GNL} OBJS="${OBJS_STD} ${OBJS_GNL}"

clean:
	@rm -f ${OBJS_STD} ${OBJS_PRINTF} ${OBJS_GNL}
	@echo "${PREFIX}${BLUE}Cleaning object files...${RESET}"

fclean:			clean
	@rm -f ${NAME} ${NAME_STD} ${NAME_PRINTF} ${NAME_GNL}
	@echo "${PREFIX}${RED}Full clean.${RESET}"

re:				fclean all

.PHONY:			all clean fclean re libftstd libftprintf libftgnl