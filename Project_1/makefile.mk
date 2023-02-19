a.out : gcc main.o fun.o
	main.o fun.o : gcc main.o a.h 