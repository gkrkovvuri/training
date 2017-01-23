# include <stdio.h>

# define MAX 256

char mystrcmp(char *str1, char *str2);

int main(void)
{
	short int n;
	char str1[MAX];
	char str2[MAX];

	scanf("%s", str1);
	scanf("%s", str2);

	n = mystrcmp(str1 , str2);

	printf("%d", n);
	return 0;
}


char mystrcmp(char *str1, char *str2)
{
//	int i = 0;

//	while((str1++ != '\0') && (str2++ != '\0')) {
	while(*str1 == *str2) {
		*str1++;
		*str2++;
	}
	if(*str1++ == *str2++) {
		return 0;
	}
	else if(*str2++ > *str1++) {
		return 1;
	}
	else {
		return -1;
	}
}

