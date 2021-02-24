CC = gcc

.PHONY: foobar

foobar: src/a.o src/b.o
	gcc $^ src/main.c -o foobar

%.o: %.c
	$(CC) -c $< -o $@
