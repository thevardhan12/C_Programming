exe: main.o peek.o peep.o push.o pop.o
	gcc -o exe main.o peek.o peep.o push.o pop.o
main.o: main.c
	gcc -c main.c
push.o: push.c
	gcc -c push.c
pop.o: pop.c
	gcc -c pop.c
peek.o: peek.c
	gcc -c peek.c
peep.o: peep.c
	gcc -c peep.c
clean:
	rm *.o