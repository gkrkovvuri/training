# include <stdio.h>
# define MAX 256
void mystrcpy(char *dbuf, char *sbuf);

int exp1(void)
{
	char sbuf[MAX] =  "GLOBAL EDGE";
	char dbuf[MAX];

	mystrcpy(dbuf, sbuf);

	printf ("%s", dbuf);
	return 0;

}

void mystrcpy(char *dbuf, char *sbuf)
{
/*	int i;
	
	for(i = 0;sbuf[i] != '\0'; i++) {
	dbuf[i] = sbuf[i];
	}

	dbuf[i] = '\0';
	*/
//	printf ("%p", dbuf);
	while ((*dbuf ++ = *sbuf ++) != '\0');
//	printf ("%p", dbuf);
} 
