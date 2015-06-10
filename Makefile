default: Node Stack main.cpp
	g++ -o main Node.o Stack.o main.cpp

Stack:
	g++ -c Stack.cpp

Node:
	g++ -c Node.cpp

