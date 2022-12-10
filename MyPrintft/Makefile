# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdiaz-fe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 10:54:41 by bdiaz-fe          #+#    #+#              #
#    Updated: 2022/11/26 11:03:07 by bdiaz-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libftprintf.a
SRCS	=	ft_printf.c \
			ft_aux.c

OBJS	=	${SRCS:.c=.o}

LIB		=	ft_printf.h

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)
# ------
$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)


#-----
RM		= 	-rm -f
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	clean re fclean .c.o printf ft_printf
