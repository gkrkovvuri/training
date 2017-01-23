# include <stdio.h>

# define MAX 256

int main(void)
{
	unsigned short int i;
	unsigned short int j;
	char str[MAX];

	scanf("%s", str);

	for(i = 0;str[i] != '\0';i++) {
		if (str[i] == str[i+1]) {
			for (j = i ; str[j] != '\0'; j++) {
				str[j] = str[j + 1];
			}
			i--;
		}
	}
	printf("%s",str);
	return 0;
}
