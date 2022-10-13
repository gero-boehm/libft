CC=gcc
CFLAGS=-Wall -Wextra -Werror
DEPS=libft.h
OBJ_DIR=obj
OBJS=$(shell (find * -name '*.c' | sed 's/\.c$$/.o/' | sed 's/^/$(OBJ_DIR)\//'))

$(OBJ_DIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJS)
	ar -crs libft.a $^

test: $(OBJS)
	$(CC) -o $@ $^ && ./test

clean:
	rm -f $(OBJ_DIR)/*.o

fclean:
	rm -f $(OBJ_DIR)/*.o