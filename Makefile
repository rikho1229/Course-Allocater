lazoRicardoA1: lazoRicardoA1.o lazoRicardoA1Main.o
	gcc -Wall -std=c99 lazoRicardoA1.o lazoRicardoA1Main.c -o lazoRicardoA1
	
lazoRicardoA1.o: lazoRicardoA1.c givenA1.h
	gcc -Wall -std=c99 -c lazoRicardoA1.c

lazoRicardoA1Main.o: lazoRicardoA1Main.c givenA1.h
	gcc -Wall -std=c99 -c lazoRicardoA1Main.c

clean:
	rm *.o lazoRicardoA1