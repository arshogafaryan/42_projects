NAME		= libftprintf.a
SRCS		= $(shell find "./srcs" -name "*.c")
OBJS		= $(SRCS:.c=.o)
INCS		= -I./include
CFLAGS		= -Wall -Wextra -Werror $(INCS)
AR			= ar rcs
RM			= rm -f
CC			= cc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
