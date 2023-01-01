# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 14:18:05 by nmilan            #+#    #+#              #
#    Updated: 2023/01/01 11:12:19 by nmilan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC    =	fill_stack.c \
			main.c \
			utils.c \

OBJS    =    ${SRC:%.c=%.o}

INCLUDE		=	push_swap.h \

CC    = cc

NAME    = push_swap

CFLAGS    = -Wall -Wextra -Werror

FT_PRINTF_PATH	=	ft_printf/

FT_PRINTF_FILE	=	libftprintf.a

FT_PRINTF_LIB	=	$(addprefix $(FT_PRINTF_PATH), $(FT_PRINTF_FILE))

LIBFT_PATH	=	libft/

LIBFT_FILE	=	libft.a

LIBFT_LIB	=	$(addprefix $(LIBFT_PATH), $(LIBFT_FILE))

all :        ${NAME}

lib:
	make -C $(LIBFT_PATH)

lib_pf:
	make -C $(FT_PRINTF_PATH)

${NAME} : lib lib_pf ${OBJS}
			$(CC) $(OBJS) $(LIBFT_LIB) $(FT_PRINTF_LIB) -o $(NAME)
clean :
	make clean -C $(LIBFT_PATH)
	make clean -C $(FT_PRINTF_PATH)
	rm -f $(OBJS)

fclean :	clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(FT_PRINTF_PATH)


re :		fclean
			make all

%.o: %.c    ${HEADERS} Makefile
		${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@


.PHONY:        all clean fclean re lib lib_pf
