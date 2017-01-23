#include <stdio.h>
#define MAX 256

int main(void)
{
	char str[MAX];
	int i;
	int len;
	fgets(str, MAX, stdin);
//	scanf("%s",str);
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i <=(len / 2) ; i++) {
		if(str[i] != str[len - i - 2]) {
			break;
		}
	}
	printf ("%d",i);
	if (i == ((len /2)+1)) {
		printf("\ngiven number is palindrome");
	} else {
		printf("\ngiven string is not palindrome");
	}


	return 0; 
}
