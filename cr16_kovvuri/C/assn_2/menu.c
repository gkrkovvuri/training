# include <stdio.h>

extern int exp1(void);
extern int exp2(void);
extern int exp3(void);
/*extern int exp4(void);
extern int exp5(void);
extern int exp6(void);
extern int exp7(void);
extern int exp8(void);
extern int exp9(void);
extern int exp10(void);
extern int exp11(void);
extern int exp12(void);
extern int exp13(void);
extern int exp14(void);
extern int exp15(void);*/

int main (void)
{
	int ch;
	
	printf("Enter 1 to copy string from source to destination:");
	printf("\nEnter 2 to copy n bits from source string to destination:");
	printf("\nEnter the choice");
	scanf("%d", &ch);

	switch(ch) {
		case 1:	
			exp1();
			break;
		case 2:
			exp2();
			break;
		case 3:
			exp3();
			break;
/*		case 4:
			exp4();
			break;
		case 5:
			exp5();
			break;
		case 6:
			exp6();
			break;
		case 7:
			exp7();
			break;
		case 8:
			exp8();
			break;
		case 9:
			exp9();
			break;
		case 10:
			exp10();
			break;
		case 11:
			exp11();
			break;  
		case 12:
			exp12();
			break;
		case 13:
			exp13();
			break;
		case 14:
			exp14();
			break;
		case 15:
			exp15();
			break;
	*/	default:
			printf("\nInvalid input");
	}
	return 0;
}                              
                                                    

