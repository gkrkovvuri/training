#include <stdio.h>

#define MAX 256
size_t strspn (char *, char *);
int main (void)
{
	size_t n;
	char buf1[MAX];
	char buf2[MAX];

	fgets (buf1, MAX, stdin);
	fgets (buf2, MAX, stdin);

	n = strspn (buf1, buf2);
	printf("%d", n);
	return 0;
}

size_t strspn(char *buf1, char *buf2)
{
	int flag = 0;
	int i;
	int j;

	for (i = 0; buf1[i] != '\0'; i++) {
		for(j = 0; buf2[j] != '\0'; j++) {
			if (buf1[i] == buf2[j]) {
				flag = 1;
				break;
			} else {
				flag = 0;
			}
		}
		if (flag == 0) {
			break;
		}
	}
//	printf("No.of characters are %d",++i);
	return i;
}


