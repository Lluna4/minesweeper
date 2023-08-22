CC = g++

COMPILER_FLAGS = -std=c++2a

all : main.cpp
	$(CC) main.cpp -o  minesweeper.out $(COMPILER_FLAGS)

clean:
	rm -rf *.out

re : clean all

.PHONY: all clean re