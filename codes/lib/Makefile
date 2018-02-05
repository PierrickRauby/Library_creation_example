libtest.a : test.o
	ar -q libtest.a test.o

test.o : test.c test.h
	gcc -c test.c -o test.o

clean :
	rm *.a
	rm *.o
