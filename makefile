all: derle calistir

derle:
	g++ -I ./include/ -o ./lib/LinkedList.o -c ./src/LinkedList.cpp
	g++ -I ./include/ -o ./bin/main ./lib/LinkedList.o ./src/main.cpp 	
	
calistir:
	./bin/main