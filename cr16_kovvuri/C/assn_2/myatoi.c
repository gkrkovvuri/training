#include <stdio.h>
#define MAX 256
int main ()
{
	char str[MAX] = "g-123opal";
	int n;

	n = myatoi (str);
	printf ("%d", n);

	return 0;
}

int myatoi (char *str)
{
	int i = 0;
	int n = 0;

	if (str[0] == '-') {
		i ++;
	}

	while (str[i] >= 48 && str[i] <= 57) {
		n = 10 * n + ( str[i] - '0') ;
		i ++;
	}

	if (str[0] == '-') {
		n = - n;
	}

	return n;
}
