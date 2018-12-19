all: main.o
test: main.o
	./main.o
main.o:
	echo "Before make:"
	ls
	g++ -o main.o main.cpp
	echo "After make:"
	ls
clean:
	echo "Before clean:"
	ls
	rm -rf *.o
	echo "After clean:"
	ls