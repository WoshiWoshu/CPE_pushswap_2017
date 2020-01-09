##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##
CFLAGS = -g
AR = ar rc
RM = rm -f
SRCS =	libmy/my_isneg.c \
	libmy/my_revstr.c \
	libmy/my_strcpy.c \
	libmy/my_strlowcase.c \
	libmy/my_is_prime.c \
	libmy/my_showmem.c \
	libmy/my_str_isalpha.c \
	libmy/my_strncat.c \
	libmy/my_compute_power_rec.c \
	libmy/my_putchar.c \
	libmy/my_showstr.c \
	libmy/my_str_islower.c \
	libmy/my_strncmp.c \
	libmy/my_sort_int_array.c \
	libmy/my_str_isnum.c \
	libmy/my_strncpy.c \
	libmy/my_compute_square_root.c \
	libmy/my_put_nbr.c \
	libmy/my_strcapitalize.c \
	libmy/my_str_isprintable.c \
	libmy/my_strstr.c \
	libmy/my_find_prime_sup.c \
	libmy/my_putstr.c \
	libmy/my_strcat.c \
	libmy/my_str_isupper.c \
	libmy/my_strupcase.c \
	libmy/my_get_nbr.c \
	libmy/my_strcmp.c \
	libmy/my_strlen.c \
	libmy/my_swap.c \
	push_swap.c \
	linked_list_function.c \
	bubble_sort_list.c \
	bonus/bubble_sort_list_2.c \

OBJS = $(SRCS:.c=.o)

NAME = libmy.a



all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
cp1:
	$(COPY1)
cp2:
	$(COPY2)

rm:
	$(RM)$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
