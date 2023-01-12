CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
MANDATORY_SRC=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
	ft_calloc2.c ft_malloc2.c ft_extstr2.c
BONUS_SRC=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
MANDATORY_OBJ=$(MANDATORY_SRC:.c=.o)
BONUS_OBJ=$(BONUS_SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(MANDATORY_OBJ)
	ar -crs $(NAME) $^

bonus: $(MANDATORY_OBJ) $(BONUS_OBJ)
	ar -crs $(NAME) $^

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

compile: $(MANDATORY_OBJ) $(BONUS_OBJ) main.o
	$(CC) $^

test: compile
	./a.out

tclean: clean
	rm -f main.o

tfclean: fclean
	rm -f a.out

.PHONY:
	all bonus clean fclean re compile test tclean tfclean