fib: fib.c
	gcc -o fib fib.c

clean:
	rm fib

test: fib
	bash test.sh
