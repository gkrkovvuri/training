# include <stdio.h>

# define MAX 256
char *insertchar(char *str, char ch, int pos);

int main(void)
{	
	char *ptr;
	char str[MAX];
	char ch;
	int pos;

	scanf("%c", &ch);
	scanf("%d", &pos);
//	getchar();
//	fgets(str, MAX, stdin);
//	ch = fgetc(stdin);
//	getchar();
	scanf("%s", str);
	ptr = insertchar(str, ch, pos);
	
	printf("%s\n", ptr);
	return 0;
}

char *insertchar(char *str, char ch, int pos)
{
	int n;

	for(n = 0; str[n] != '\0'; n++);
	for( ; n > pos; n--) {
	     str[n] = str[n - 1];
	}
	str[pos] = ch;
//	printf("%s\n", ptr);
//	printf("%s\n", str);
	return str;
}
