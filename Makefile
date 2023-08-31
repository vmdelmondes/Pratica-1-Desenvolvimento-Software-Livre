all: hello

hello: hello.o MyFunctions.o MyFunctions2.o
	gcc -o hello hello.o MyFunctions.o MyFunctions2.o -lm
	
MyFunctions.o: MyFunctions.c 
	gcc -c MyFunctions.c
	
MyFcuntions2.o: MyFunctions2.c
	gcc -c MyFunctions2.c
	
clean: 
	rm -f *.s *.o output erro
	
distclean: clean
	rm -f  hello
	
hello.o: hello.c
	gcc -c hello.c
	
all.o: hello.c MyFunctions2.c MyFunctions.c 
	gcc -c hello.c
	gcc -c MyFunctions.c
	gcc -c MyFunctions2.c
	

