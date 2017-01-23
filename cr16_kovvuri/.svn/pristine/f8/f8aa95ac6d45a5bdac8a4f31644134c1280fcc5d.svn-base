# include <stdio.h>

# define MAX 256

char *remsstr(char *str, char *sstr);

int main(void)
{
	char str[MAX];
	char sstr[MAX];
	char *fstr;

	fgets(str, MAX, stdin);
	fgets(sstr, MAX, stdin);

	fstr = remsstr(str, sstr);	
	
	printf("%s", fstr);
	return 0;
}

char *remsstr(char *str, char *sstr)
{
	int i;
	int j;
	int count = 0;
	int n = 0;
	int len1;
	int len2;
	char *ptr = str;

	for(len1 = 0;str[len1] != '\0';len1++);
	for(len2 = 0;sstr[len2] != '\0';len2++);

	for(i = 0;str[i] != '\0';i++) {
		for(j = 0; sstr[j] != '\0'; j++) {
			while((str[i] == str[j]) && (sstr[j] != '\0')){
				str[i + n] = sstr[j + n];
				count++;
				n++;
			}
			if(count == len2) {
				str[len1 - len2] = '\0';
			}
			printf("%s\n", ptr);
		}
	}
	return ptr;
}
