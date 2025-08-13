
workshop: main.o
	g++ -o workshop main.o

main.o: main.cpp workshop.h
	g++ -c main.cpp

run: workshop
	./workshop

all: workshop

clean:
	rm -f workshop main.o
