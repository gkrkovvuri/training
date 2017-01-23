# include <stdio.h>

# define MAX 256

char *snapped(char *str1, char *str2, int n);

int main(void)
{

	char str1[MAX];
	char str2[MAX];
	char *str3;
	int n;

	scanf("%s", str1);
	scanf("%s", str2);

	printf("enter no.of bit to append");
	scanf("%d", &n);

	str3 = snapped(str1, str2, n);

	printf("%s", str3);
	return 0;
}

char *snapped(char *str1, char *str2, int n)
{
	int i = 0;
	char *ptr = str2;
	while(*str2++ != '\0');
	
	*str2--;
  
	while((i < n) && ((*str2++ = *str1++) != '\0')) {
		i++;
	}
	return ptr;
}
