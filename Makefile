# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 03:58:58 by arthur            #+#    #+#              #
#    Updated: 2025/01/25 19:07:15 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

LIBFTPATH	=	libft/

LIBFTA		=	$(LIBFTPATH)libft.a

SRCDIR		=	src

OBJDIR		=	obj

SRCS		=	$(wildcard $(SRCDIR)/*.c)

OBJS		=	$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

lib:
	make -C $(LIBFTPATH)

$(NAME): lib $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTA) -o $@

clean:
	rm -rf $(OBJDIR)
	make fclean -C $(LIBFTPATH)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFTPATH)

re: fclean all

.PHONY: all clean fclean re bonus
