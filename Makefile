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

NAME				:=	libft.a
NAME_GENERAL		:=	libftstd.a
NAME_GNL			:=	libftgnl.a
NAME_FT_PRINTF		:=	libftprintf.a

FOLDER_GENERAL		:=	general_functions/
FOLDER_GNL			:=	get_next_line/
FOLDER_FT_PRINTF	:=	ft_printf/

MAKE_GENERAL		:=	@make --no-print-directory -C ${FOLDER_GENERAL}
MAKE_GNL			:=	@make --no-print-directory -C ${FOLDER_GNL}


all:				general_functions

general_functions:
	${MAKE_GENERAL}
	@mv ${FOLDER_GENERAL}/${NAME_GENERAL} ./${NAME}

get_next_line:
	${MAKE_GNL}
	@mv ${FOLDER_GNL}/${NAME_GNL} ./${NAME}

clean:
	${MAKE_GENERAL} clean
	${MAKE_GNL} clean

fclean:
	${MAKE_GENERAL} fclean
	${MAKE_GNL} fclean
	@rm -f ${NAME}

re:					fclean clean all

.PHONY:				all general_functions get_next_line clean fclean re
