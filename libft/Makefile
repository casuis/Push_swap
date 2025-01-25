# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/14 10:26:36 by asimon            #+#    #+#              #
#    Updated: 2025/01/25 19:19:06 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a

FILES_H		=	libft.h

SRCDIR		=	src

OBJDIR		=	obj

SRCS		=	$(wildcard $(SRCDIR)/*.c)

OBJS		=	$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

CC			=	gcc

ARGUMENTS	=	-c


$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

all:		$(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(FLAGS) $(ARGUMENTS) $< -o  $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME) $(OBJS_BNS)

re:			fclean all

aclean:		all clean

.PHONY:		all .c.o clean fclean aclean re coffe
