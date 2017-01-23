# include <stdio.h>
# include <stdlib.h>
# include "../HEADER/sort.h"

# define MAX 8

int main (void)
{
	int array[MAX];
	int i;
	unsigned short int ch;
	
	printf ("\n1.Selection sort\n2.Bubble Sort\n3.Insertion sort\n4.Merge Sort");
	printf("\n5.Quick Sort");
	printf ("\nEnter the choice");
	scanf ("%hi", & ch);
	printf ("\nEnter the array elements");

	for (i = 0; i < MAX; i++) {
		scanf("%d", &array[i]);
	}

	switch (ch) {
		case 1:
			selection_sort (array, MAX);
			printf ("\nSorted using Selection sort:\n"); 
			print_array (array, MAX);
			break;
		case 2:
			bubble_sort (array, MAX);
			printf ("\nSorted using bubble  sort:\n"); 
			print_array (array, MAX);
			break;
		case 3:
			insertion_sort (array, MAX);
			printf ("\nSorted using Insertion sort:\n"); 
			print_array (array, MAX);
			break;
		case 4:
			mergeSort (array, 0, MAX - 1);
			printf ("Soreted using merge sort:\n");
			print_array (array, MAX);
			break;
		case 5:
			quicksort (array, 0, MAX - 1);
			printf ("\nSorted using quick sort");
			print_array (array, MAX);
		default :
			printf("\nInvalid OPtion");

	}
	
	return 0;
}
