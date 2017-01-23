app : main.o mergesort.o sorting.o quicksort.o
	gcc -o app main.o mergesort.o sorting.o quicksort.o
main.o: main.c
	gcc -c main.c
mergesort.o: mergesort.c
	gcc -c mergesort.c
sorting.o: sorting.c 
	gcc -c sorting.c
quicksort.o: quicksort.c
	gcc -c quicksort.c
clean:
	rm main.o mergesort.o sorting.o quicksort.o
