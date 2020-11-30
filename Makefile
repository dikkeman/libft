# ************************************************************************** #
#                                                                            #
#                                                        ::::::::            #
#   Makefile                                           :+:    :+:            #
#                                                     +:+                    #
#   By: xvoorvaa <marvin@codam.nl>                   +#+                     #
#                                                   +#+                      #
#   Created: 2020/11/20 14:55:34 by xvoorvaa      #+#    #+#                 #
#   Updated: 2020/11/20 14:55:35 by xvoorvaa      ########   odam.nl         #
#                                                                            #
# ************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c \
					ft_strlcat.c  ft_strncmp.c ft_substr.c ft_atoi.c \
					ft_isalpha.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c  ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c    \
					ft_putstr_fd.c  ft_strjoin.c ft_strtrim.c ft_itoa.c \
					ft_memcpy.c ft_split.c ft_strmapi.c ft_strrchr.c \
					ft_memccpy.c ft_memset.c \

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c \

OBJS			= $(SRCS:.c=.o)

BONUSC			= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

bonus:			$(BONUSC)
				ar rcs $(NAME) $(BONUSC)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUSC)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
