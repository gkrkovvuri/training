#include <stdio.h>
#define MAX 256
#include <stdlib.h>
char *chr_add_instr (char *str, char c);
int main()
{
	char *str;
	char c;
	char *ptr;

	str = (char *) malloc (MAX);
	fgets (str, MAX, stdin);
	c = fgetc(stdin);
	ptr = chr_add_instr(str, c);

	printf("%p\n", str);
	printf("\ngiven character found at address%p", ptr);

	return 0;

}

char *chr_add_instr (char *str, char c)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0';i ++);
	while (*str++ != c) {
		j ++;
		if (*str == '\0')
			break;
	}
	if (i > j) {
		return str - 1;
	} else {
		return NULL;
	}
}
