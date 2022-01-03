# _*_ MakeFile _*_

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c  ft_unsputnbr.c ft_lower_base_converter.c ft_upper_base_converter.c

OBJS = $(SRCS:.c=.o)

ICLS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)	

.c.o: 
	$(CC) $(CFLAGS) -I $(ICLS) -c $<

clean : 
	rm -f $(OBJS)
	
fclean :	clean
	rm -f $(NAME)

re : fclean all

.PHONY: re all fclean clean bonus
