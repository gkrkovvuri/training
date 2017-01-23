# include <stdio.h>
# include "mystring.h"
# define MAX 256

void mystrncpy(char *dbuf, char *sbuf, int n);

int exp2(void)
{
	char sbuf[MAX] = "Global Edge";
	char dbuf[MAX];
	int n;
	
	printf("no.of bits to be copied");
	scanf("%d", &n);

	mystrncpy(dbuf, sbuf, n);

	printf("%s\n", dbuf);

	return 0;
}

void mystrncpy(char *dbuf, char *sbuf, int n)
{
	int i;

//	for (i = 0; sbuf[i] != '\0'; i ++);

	if(n <= mystrlen(sbuf) && n > 0) {
		for(i = 0; i < n; i++) {
			dbuf[i] = sbuf[i];
		}
		dbuf[i] = '\0';
	} else {
		printf ("\ninvalid input");
		dbuf[0] = '\0';
	}

} 
