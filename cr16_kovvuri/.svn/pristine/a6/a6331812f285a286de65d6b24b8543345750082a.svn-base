#include <stdio.h>
#define MAX 256

char *sappend(char *str1, char *str2);
int main ()
{
	char str1[MAX];
	char str2[MAX];
	char *str3;
//	fgets(str1, MAX, stdin);
//	fgets(str2, MAX, stdin);
	scanf("%s", str1);
	scanf("%s", str2);
	str3 = sappend(str1, str2);
	printf ("%s", str3);
	return 0;
}
char *sappend(char *str1, char *str2)
{
//	int i;
//	int j;
	char *ptr3;

	ptr3 = str2;
	while(*str2++ != '\0');
	*str2--;
	while ((*str2++ = *str1++) != '\0');
/*	for(i = 0; str2[i] != '\0'; i++);
	for(j = 0; str1[j] != '\0'; j++) {
		str2[i] = str1[j];
	}
	str2[i] = '\0';*/
//	printf("%s", ptr3);
	return ptr3;
}

