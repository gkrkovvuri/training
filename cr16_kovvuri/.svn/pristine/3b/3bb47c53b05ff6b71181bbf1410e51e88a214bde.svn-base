#include <stdio.h>
#define MAX 256

int main(void)
{
	char str[MAX];
	int i;
	char temp;
	int len;
//      fgets(str, MAX, stdin);
	scanf("%s",str);
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i <=(len / 2) ; i++) { 
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	printf("%s", str);

	return 0;
}
