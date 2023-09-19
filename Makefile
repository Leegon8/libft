# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 12:49:15 by lauriago          #+#    #+#              #
#    Updated: 2023/09/16 14:21:48 by lauriago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#NAME & HEADER#

NAME = libft.a
HEADER = libft.h

SRCS =  ft_isascii.c ft_isalnum.c ft_isdigit.c ft_strlcpy.c \
		ft_isprint.c ft_isalpha.c ft_strlen.c \

OBJS = $(SRCS:.c=.o)

HEADER = libft.h

#VARIABLES#

LIB = ranlib
AR = ar rcs
RM = rm -f
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

#TARGETS#

%.o: %.c $(HEADER)
	cc $(CCFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#CLEAN#

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

#RE-MAKE#
re: fclean all

.PHONY: all clean fclean re bonus
