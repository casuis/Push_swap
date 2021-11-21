# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 03:58:58 by arthur            #+#    #+#              #
#    Updated: 2021/11/21 17:42:50 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCSDIR		=	srcs/

LIBFTPATH	=	libft/

LIBFTA		=	$(LIBFTPATH)libft.a

SRCS		=	$(SRCSDIR)push_swap.c		\
				$(SRCSDIR)init.c			\
				$(SRCSDIR)core.c			\
				$(SRCSDIR)core_little.c		\
				$(SRCSDIR)bin_op.c			\
				$(SRCSDIR)count.c			\
				$(SRCSDIR)error.c			\
				$(SRCSDIR)free.c			\
				$(SRCSDIR)parse.c			\
				$(SRCSDIR)push.c			\
				$(SRCSDIR)reverse_rotate.c	\
				$(SRCSDIR)rotate.c			\
				$(SRCSDIR)set.c				\
				$(SRCSDIR)swap.c			\
				$(SRCSDIR)tools.c			\
				$(SRCSDIR)tools_core.c		\

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

lib:
	make -C $(LIBFTPATH)

$(NAME): lib $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTA) -o $@

clean:
	rm -f $(OBJS)
	make fclean -C $(LIBFTPATH)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFTPATH)

re: fclean all

.PHONY: all clean fclean re bonus
