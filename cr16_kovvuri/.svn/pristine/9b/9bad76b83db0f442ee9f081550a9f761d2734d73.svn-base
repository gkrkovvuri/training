# include <stdio.h>

#define MAX 256

int strcasecmp(char *str1, char *str2);

int main(void)
{
	int n;
	char str1[MAX];
	char str2[MAX];

	fgets(str1, MAX, stdin);
	fgets(str2, MAX, stdin);

	n = strcasecmp(str1, str2);

	printf("%d", n);

	return 0;
}

int strcasecmp (char *str1, char *str2)
{
	int i;

	for (i = 0 ; str1[i] != '\0'; i++) {
		if ((str1[i] >= 65) && (str1[i] <= 90)) {
			str1[i] += 32;
		}
	}

	for (i = 0 ; str2[i] != '\0'; i++) {
		if ((str2[i] >= 65) && (str2[i] <= 90)) {
			str2[i] += 32;
		}
	}
/*	while(*str1 == *str2) {
                *str1++;
                *str2++;
        }
        if(*str1++ == *str2++) {
                return 0;
        }
        else if(*str2++ > *str1++) {
                return 1;
        }
        else {
                return -1;
        }*/
	for(i = 0;(str1[i] != '\0') && (str2[i] != '\0'); i++) {
		if(str1[i] != str2[i]) {
			break;
		}
	}
	 if(str1[i] == str2[i]) {
                return 0;
        } else if(str2[i] > str1[i]) {
                return 1;
        } else {
                return -1;
        }

}
