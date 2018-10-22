compile: sieve.o
	gcc sieve.o
run: 
	./a.out
clean:
	rm *.o
sieve.o:
	gcc -c sieve.c
