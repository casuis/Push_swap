# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/14 10:26:36 by asimon            #+#    #+#              #
#    Updated: 2021/11/21 20:01:01 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a

FILES_C		= 	ft_atoi.c			\
				ft_isdigit.c		\
				ft_strlen.c			\
				ft_itoa.c			\


DIR_C		=	./

SRCS		=	$(addprefix $(DIR_C), $(FILES_C))

SRCS_BNS	=	$(addprefix $(DIR_C), $(BONUS_C))

FILES_H		=	libft.h

DIR_H		=	./

HEADERS		= 	$(addprefix $(DIR_H), $(FILES_H))

OBJS		=	$(SRCS:.c=.o)

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

CC			=	gcc

ARGUMENTS	=	-c


$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

all:		$(NAME)

.c.o:
		$(CC) $(FLAGS) $(ARGUMENTS) $< -o  $(<:.c=.o)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME) $(OBJS_BNS)

re:			fclean all

aclean:		all clean

.PHONY:		all .c.o clean fclean aclean re coffe
