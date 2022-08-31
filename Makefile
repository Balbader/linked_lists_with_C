NAME		=	liblst.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
IFLAGS		=	-I$(INC_PATH)

AR			=	ar
ARFLAGS		=	rc

RM			=	rm -rf

INC_PATH	=	.
INC_NAME	=	liblst.h

SRC_PATH	=	.
SRC_NAME	=	print_lst.c \
				insert_at_head.c \
				insert_at_tail.c \
				delete_node.c \

INC			=	$(addprefix $(INC_PATH)/, $(INC_NAME))
SRC			=	$(addprefix $(SRC_PATH)/, $(SRC_NAME))

.SUFFIXES:		.c .o .h

OBJ			=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) $(INC)
				$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o:		%.c
				$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
