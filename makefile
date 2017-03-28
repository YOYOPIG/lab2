lab2: main.o elo.o
	g++ -o lab2 main.o elo.o
main.o: main.cpp elo.h
	g++ -c main.cpp elo.h
elo.o: elo.cpp elo.h
	g++ -c elo.cpp
