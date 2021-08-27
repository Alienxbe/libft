# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 19:55:36 by mykman            #+#    #+#              #
#    Updated: 2021/08/27 16:26:28 by mykman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				:=	libft.a
NAME_GENERAL		:=	general_functions.a
NAME_GNL			:=	gnl.a

FOLDER_GENERAL		:=	general_functions
FOLDER_GNL			:=	GNL

MAKE_GENERAL		:=	@make -C ${FOLDER_GENERAL}
MAKE_GNL			:=	@make -C ${FOLDER_GNL}


all:				general_functions gnl

general_functions:
	${MAKE_GENERAL}
	mv ${FOLDER_GENERAL}/${NAME_GENERAL} ./${NAME}

gnl:				general_functions
	${MAKE_GNL}
	@ar -rcs ${NAME} ${FOLDER_GNL}/${NAME_GNL}

clean:
	${MAKE_GENERAL} clean
	${MAKE_GNL} clean

fclean:
	${MAKE_GENERAL} fclean
	${MAKE_GNL} fclean
	@rm -f ${NAME}

re:					fclean clean all

.PHONY:				all general_functions gnl clean fclean re
