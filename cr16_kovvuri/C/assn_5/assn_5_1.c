#include <stdio.h>
#include <stdlib.h>

/* Program to convert UPPER CASE to lower case in a file*/

int prg1 (void)
{
	FILE *fp;
	FILE *f;
	char c;

	fp = fopen("abc.txt", "r+"); // opening file with one file descriptor

	if (fp == NULL) {
		perror ("filed opening failed");
		exit (1);
	}
	f = fopen("abc.txt", "r+"); // opening the same file with another file descriptor
	if (f == NULL) {
		perror ("fail opening failed");
		exit (1);
	}

	while((c = fgetc(fp)) != EOF) {
		if(c >= 'A' && c <= 'Z') {  // checking whether alphabet is upper.
			c = c + 32;    // if upper converting them to lower.
		}
		fputc(c, f); // copying converted into same file using another file descrip
	}	

	fclose(fp);

	return 0;
}
