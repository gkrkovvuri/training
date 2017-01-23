#include <stdio.h>
char *insertchar(char *str, char ch, int pos)
{
	int n;

	for(n = 0; str[n] != '\0'; n++);
	for( ; n > pos; n--) {
	     str[n] = str[n - 1];
	}
	str[pos] = ch;
	return str;
}
