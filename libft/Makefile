# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/14 10:26:36 by asimon            #+#    #+#              #
#    Updated: 2020/01/14 10:26:50 by asimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a

FILES_C		= 	ft_atoi.c			\
				ft_bzero.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c			\
				ft_strchr.c			\
				ft_strlcat.c		\
				ft_strlcpy.c		\
				ft_strlen.c			\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strrchr.c		\
				ft_tolower.c		\
				ft_toupper.c		\
				ft_strdup.c			\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_calloc.c			\


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
		$(CC) $(FLAGS) $(ARGUMENTS) $< -o  $(<:.c=.o) -I$(HEADERS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME) $(OBJS_BNS)

re:			fclean all

aclean:		all clean

.PHONY:		all .c.o clean fclean aclean re coffe
