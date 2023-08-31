all:

hello: hello.o
	gcc -o hello hello.o -lm
	
clean: 
	rm -f hello.s
	
distclean: clean
	rm -f  hello
	
hello.o: hello.c
	gcc -c hello.c
