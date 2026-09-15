main.o:
	g++ -c -v main.cc -o main.o

# 1 Preprocess
# cc1plus -E swap.cc -o swap.ii
swap.ii:
	g++ -E -v swap.cc -o swap.ii

# 2 compile
# cc1plus swap.ii -o swap.s
swap.s: swap.i
	g++ -S -v swap.ii -o swap.s

# 3 assemble
# as -v --64 -o swap.o swap.s
swap.o: swap.s
	g++ -c -v swap.s  -o swap.o

# 1 Preprocess
main.ii:
	g++ -E -v main.cc -o main.ii

# 2 compile
main.s: main.i
	g++ -S -v main.ii -o main.s

# 3 assemble
main.o: main.s
	g++ -c -v main.s  -o main.o

# 4 link
# collect2 -o main main.o swap.o 
main: main.o swap.o
	g++ -v main.o swap.o -o main

# 4 link
.PHONY: save
save:
	g++ -v -save-temps main.cc swap.cc -o main

.PHONY: clear
clear:
	rm -rf *.i
	rm -rf *.s
	rm -rf *.o
	rm -rf main
