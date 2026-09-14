main.o:
	g++ -c -v main.cc -o main.o

# 1 Preprocess
# cc1plus -E swap.cc -o swap.i
swap.i:
	g++ -E -v swap.cc -o swap.i

# 2 compile
# cc1plus swap.i -o swap.s
swap.s: swap.i
	g++ -S -v swap.i -o swap.s

# 3 assemble
swap.o: swap.s
	g++ -c -v swap.s  -o swap.o

# 1 Preprocess
main.i:
	g++ -E -v main.cc -o main.i

# 2 compile
main.s: main.i
	g++ -S -v main.i -o main.s

# 3 assemble
main.o: main.s
	g++ -c -v main.s  -o main.o

# 4 link
main: main.o swap.o
	g++ -v main.o swap.o -o main

# 4 link
p:
	g++ -v -O2 -g -o main main.cc swap.cc

.PHONY: clear
clear:
	rm -rf *.i
	rm -rf *.s
	rm -rf *.o
	rm -rf main
