all: finalLaba3
clean:
	rm -f finalLaba3 *.o
Laba3: main.c stack.c sort.c
	gcc -o finalLaba3 main.c stack.c sort.c
start:
	@echo "Running with arguments: $(args)"
	./finalLaba3 $(args)