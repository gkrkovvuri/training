#include <stdio.h>

extern void showbits (int num);                                                         

/* Experiment :1 Program to swap bits between source and destination */
#if 0
int bit_swap (int n, int s, int d)
{
	
  	int src_bit;
    int des_bit;

	src_bit = (n >> (s-1)) & 1;
	src_bit = (src_bit << (d-1));
	des_bit = (n>> (d-1)) & 1;
	des_bit = (des_bit << (s-1));
	n = n & ( ~(1 << (s-1)));
	n = n & (~ (1 << (d-1)));
	n = n | src_bit;
	n = n | des_bit; 
    
    return n;


}


int main (void)
{
    int n;
    int s;
    int d;
   
    printf ("enter the number :");
    scanf ("%d",&n);
    printf ("\nenter the source bit postion:");
    scanf ("%d",&s);
    printf ("\nenter the destination bit postion:");
    scanf ("%d",&d);
    printf ("\nbinary representation before swapping:\n");
    showbits (n);
    
	n = bit_swap (n,s,d);
    
	printf ("\nbinary representation after swapping:\n");
    showbits (n);
    return 0;


}
#endif

 /* experiment :2 Given the bit position s in number snum and the bit position 
                  d in number dnum, swap bit values between s and d.*/
#if 0
                                                     
int main (void)
{
    int snum;
    int dnum;
    int s;
    int d;
    int src_bit;                                                                
    int des_bit;    
                                                                                    
 /* experiment :2 Given the bit position s in number snum and the bit position  
                  d in number dnum, swap bit values between s and d.*/          
#if 0                                                                           
                                                                                
int main (void)                                                                 
{                                                                               
    int snum;                                                                   
    int dnum;                                                                   
    int s;                                                                      
    int d;                                                                      
    int src_bit;                                                                
    int des_bit;                                                                
                                                                                
-- INSERT --                                                                                                                  65,5           3%

    printf("enter the source number :");
    scanf("%d",&snum);
    printf("\nenter the destination number :");
    scanf("%d",&dnum);
    printf("\nenter the source bit postion :");
    scanf("%d",&s);
    printf("\nenter the destination bit postion :");
    scanf("%d",&d);
    printf("\nbinary representation of source number before swapping:\n");
    showbits(snum);
    printf("\nbinary representation of destination number before swapping:\n");
    showbits(dnum);
    
    src_bit = (snum >> (s-1)) & 1;                                                  
    src_bit = (src_bit << (d-1));                                                   
    des_bit = (dnum >> (d-1)) & 1;                                                  
    des_bit = (des_bit << (s-1));                                                   
    snum = snum & (~(1 << (s-1)));                                                  
    dnum = dnum & (~(1 << (d-1)));                                                  
    dnum = dnum | src_bit;                                                          
    snum = snum | des_bit; 
    
    printf ("\nbinary representation of source number after swapping:\n");
    showbits (snum);
    printf ("\nbinary representation of destination number after swapping:\n");
    showbits (dnum);
    
    return 0;

                                                                                
 /* experiment :2 Given the bit position s in number snum and the bit position  
                  d in number dnum, swap bit values between s and d.*/          
#if 0                                                                           
                                                                                
int main (void)                                                                 
{                                                                               
    int snum;                                                                   
    int dnum;                                                                   
    int s;                                                                      
    int d;                                                                      
    int src_bit;                                                                
    int des_bit;                                                                
                                                                                

                                                                                
 /* experiment :2 Given the bit position s in number snum and the bit position  
                  d in number dnum, swap bit values between s and d.*/          
#if 0                                                                           
                                                                                
int main (void)                                                                 
{                                                                               
    int snum;                                                                   
    int dnum;                                                                   
    int s;                                                                      
    int d;                                                                      
    int src_bit;                                                                
    int des_bit;                                                                
                                                                                


}
#endif
# if 0
int bit_copy (int snum, int dnum, int n, int s, int d)
{
    int des_bits = 0;
    int bit;
    int temp;
    
    while (n) {
        des_bits = des_bits << 1;
        bit = (snum >> (s-1)) & 1;
        des_bits=des_bits | bit;
        n--;
        s--;

     }
    
	des_bits = des_bits << (d-1);
    
	temp = ~((~(( ~0)  << (n-1))) << (d-1));
    
	dnum = dnum & temp;
    
	dnum = dnum | des_bits;
    
    return dnum;

}


int main (void)
{
    int snum;
    int dnum;
    int s;
    int d;
    int n;
    
    printf ("enter the source number :");
    scanf ("%d",&snum);
    printf ("\nenter the destination number");
    scanf ("%d",&dnum);
    printf ("\nenter the source bit postion");
    scanf ("%d",&s);
    printf ("\nenter the destination bit postion");
    scanf ("%d",&d);
    printf ("\nenter the number of bits to be copied");
    scanf ("%d",&n);
	des_bits=des_bits | bit;                                                
	n--;                                                                    
	s--;                                                                    

    printf ("\nbinary representation of source number\n");
    showbits (snum);
    printf ("\nbinary representation of destination number\n");
    showbits (dnum);
    
    
	printf ("\nbinary represntation of dnum after copying\n");                  
    showbits (bit_copy (snum, dnum, n, s, d ));  
    return 0;

}

#endif


/* Experiment 4:a. Toggle even bit: int even_bit_toggle (int num);
                b. Toggle odd bit: int odd_bit_toggle (int num);*/
#if 0
int even_bit_toggle (int num)
{	
	int key = 2;
    
	while ( key ) {
       num = num ^ key;
       key = key << 2;
    }

    return num;


}

int odd_bit_toggle (int num)                                                   
{                                                                               
	int key = 1;                                                                
	while (key) {                                                                           
		num = num ^ key;                                                           
		key = key << 2;                                                            
	}                                                                           

	return num;                                                                 
}       

int main (void)
{
	int num;

	printf ("enter the number:");
	scanf ("%d", &num);
	printf ("\nthe number before toggling\n");
	showbits (num);
    
	printf ("\nthe number after even toggling is:\n");
	showbits (even_bit_toggle (num));
	printf ("\n the number after odd bits toggling is:\n");

	showbits (odd_bit_toggle (num));

	return 0;

}
#endif

# if 0

/* Experiment 5: Write a macro to test and set a bit position in a number.*/

#define bit_ts(num,pos) \
 		(((num >> pos - 1) & 1) ? showbits(num) : showbits(num | (1 << pos-1)));


int main (void)

{
	int num;
	int pos;
 
	printf ("enter the number");
	scanf ("%d",&num);
	printf ("\nenter the postion :");
	scanf ("%d",&pos);
	printf ("\nnumber before setting is:\n");
	showbits (num);
	printf ("\nnumber after setting is:\n"); 
	bit_ts (num,pos);

	return 0;

}

#endif

#if 0
unsigned int left_rotate_bits (unsigned int num)
{
 	
	num = num << 1 | num >> (sizeof(int) * 8 - 1);

	return num;
}
unsigned int right_rotate_bits (unsigned int num)
{

	num = num << (sizeof(int) * 8 - 1) | num >> 1;

	return num;
}
unsigned int left_rotate_n_bits (unsigned int num, int n)
{
	num = num << n | (num >> (sizeof(int) * 8 - n));

	return num;
}
unsigned int right_rotate_n_bits (unsigned int num, int n)
{
	num = num << (sizeof(int) * 8 - n) | num >> n ;

	return num;
}
int main (void)
{
	unsigned int num;
	int n;

	printf ("enter the number:");
	scanf ("%d",&num);
	printf ("\nnumber of times the bits to be rotated");
	scanf ("%d",&n);
	printf ("\nthe number before rotating\n");
	showbits (num);
	printf ("\nnumber after right rotating:\n");
	showbits (right_rotate_bits (num) );
	printf ("\nnumber after left rotating:\n");                                
	showbits (left_rotate_bits (num) );   
	printf ("\nnumber after left rotating %d times:\n",n);                                
	showbits (left_rotate_n_bits (num, n) );
	printf ("\nnumber after right rotating %d times:\n",n);                                
	showbits (right_rotate_n_bits (num, n) );   

	return 0;

}

#endif

#if 0
int count_set_bits (int num)
{
	int count = 0;

	while (num) {
		if (num & 1) 
			count ++;
		num >>= 1;
	}

	return count;
}

int count_clear_bits (int num)                                                    
{                                                                               
    int count = 0;
	
	while (num) {
		if (num & 1)
			count ++;
		num >>= 1;                                                              
       }                                                                        

	count = sizeof(int) * 8 - count ;
	
	return count;                                                               
}            
int main (void)
{
	int num;
    
	printf ("enter the number:");
	scanf ("%d", &num);
	
	printf ("\nnumber of set bits are :%d",count_set_bits (num));
	printf ("\nnumber of cleared bits are : %d\n",count_clear_bits (num));
	
	return 0;

}

#endif

#if 0
int main (void)
{
	int n;
	
	printf ("enter the number:");
	scanf ("%d", &n);
	showbits (n);
	
	printf("\nnumber of trailing set bits are:%d",cnt_trailing_set_bits(n));
	printf("\nnumber of trailing "
			"clear bits are:%d",cnt_trailing_clear_bits(n));
	printf("\nnumber of leading set bits are:%d",cnt_leading_set_bits(n));
	printf("\nnumber of leading clear bits are:%d\n",cnt_leading_clear_bits(n));
	return 0;
}
int cnt_trailing_set_bits (int num)                                           
{                                                                               
	int count = 0;                                                              

    while (num & 1 ) {                                                 
        count ++; 
		num >>= 1;      
     }                                                                           
                                                                                
   return count;                                                                
}     
int cnt_trailing_clear_bits (int num)
{
	int key = 1;
	int count = 0;
	while ((num & key) == 0 ) {
		count ++;
		key <<= 1;
		if (count > (sizeof(int) * 8) - 1)
			break;
	}

	return count;
}
int cnt_leading_set_bits (int num)
{
	unsigned int key = 1;
	int count = 0;
	
	key <<= (sizeof(int) * 8 - 1);

	while (num & key) {
		count ++;
		key >>= 1;
	}
   
	return count;
}
int cnt_leading_clear_bits (int num)
{
	unsigned int key = 1;                                                       
	int count = 0;

	key <<= (sizeof(int) * 8 - 1);

	while (!(num & key)) {
		count ++;
		key >>= 1;
	}

	return count;     
}
#endif
#if 1 // macro for finding max of two numbers

#define max(a,b) { for(i=0;i<=31;i++) { if(((a>>i)&1)==0 && ((b>>i)&1)==1 ) \
		{ max=b; } if(((a>>i)&1)==1&&((b>>i)&1)==0){max=a;}  }}

int main (void)
{
	int a;
	int b;
	int max;
	int i;
	scanf("%d %d",&a ,&b);
	
	max(a,b);
	
	printf("%d\n",max);

	return 0;
}

#endif

#if 0 // macro for clearing right most set bit

#define rmsb_clear(n) { for(i=31;i>=0;i--) { m=(n>>i)&1; \
        if (m==1) {  n=n&~(1<<i); break;}} }

int main (void)
{
	int n;
	int i;
	int m;

	scanf("%d",&n);

	showbits(n);

	rmsb_clear(n);
	
	showbits(n);

	return 0;
}

#endif

#if 0 // macro for clearing left most set bit

#define lmsb_clear(n) {  for(i=0;i<=31;i++) { m=(n>>i)&1; if (m==1) {  n=n&~(1<<i); break;}} }

int main (void)
{
	int n;
	int i;
	int m;

	scanf("%d",&n);

	showbits(n);

	lmsb_clear(n);
	
	showbits(n);

	return 0;
}

#endif

#if 0 // macro for setting right most clear bit

#define rmcb_set(n) \
{ for(i=31;i>=0;i--) { m=(n>>i)&1; if (m==0) {  n=n|(1<<i); break;}} } 

int main (void)
{
	unsigned int n;
	unsigned int i;
	unsigned int m;

	scanf("%d",&n);

	showbits(n);

	rmcb_set(n);
	
	showbits(n);

	return 0;
}

#endif

#if 0

#define lmcb_set(n) { for(i=0;i<=31;i++) { m=(n>>i)&1; if (m==0) {  n=n|(1<<i); break;}} } 

int main (void)
{
	unsigned int n;
	unsigned int i;
	unsigned int m;

	scanf("%d",&n);

	showbits(n);

	lmcb_set(n);
	
	showbits(n);

	return 0;
}

#endif

#if 0 //setting bits from position s to position d in a number and clear        rest

#define set_std(n,s,d) { for(i=0;i<=31;i++) { if(i>=s-1 && i<=d-1 ) n=n|(1<<i); else n=n&~(1<<i); } } 

int main (void)
{
	int n;
	int s;
	int d;
	int i;
	
	scanf("%d %d %d",&n,&s,&d);
	showbits(n);
	set_std(n,s,d);
	
	showbits(n);

	return 0;
}

#endif

#if 0 // clearing bits from position s to d in a number and set the rest

#define clear_std(n,s,d) { for(i=0;i<=31;i++) { if(i>=s-1 && i<=d-1 ) n=n&~(1<<i); else n=n|(1<<i); } } 

int main (void)
{
	int n;
	int s;
	int d;
	int i;
	
	scanf("%d %d %d",&n,&s,&d);
	showbits(n);
	clear_std(n,s,d);
	
	showbits(n);

	return 0;
}

#endif 

#if 0 // toggling bits from s to d and remaining unchanged

#define toggle_std(n,s,d) { for(i=s-1;i<=d-1;i++) { n=n^(1<<i); } } 

int main (void)
{
	int n;
	int s;
	int d;
	int i;
	
	scanf("%d %d %d", &n , &s , &d );

	showbits(n);
	toggle_std(n,s,d);
	
	showbits( n );

	return 0;
}

#endif 

#if 0

/* experiment 10: */

int invert (int x, int p, int n, int  y);
int main (void)
{
	int x;
	int p;
	int n;
	int y;

	printf ("enter the number x:");
	scanf ("%d",&x);
	printf ("\nenter the postion:");
	scanf ("%d",&p);
	printf ("\nenter the number of bits :");
	scanf ("%d",&n);
	printf ("\nenter the number y:");
	scanf ("%d",&y);
	printf("\nnumber x before modification");
	showbits (x);
	printf("\nnumber y before modification");
	showbits (y);
	printf("\nnumber y after modification");
	showbits (invert (x, p, n, y));

	return 0;
}

int invert (int x, int p, int n, int  y)
{
	x = ((x >> (p - n)) &  ~(~0 << n)) << ((sizeof(int) * 8 - n));
	y = y & ~ (0 >> n);
	x = x | y;

	return x;

}
#endif
/* experiment 11:*/

#if 0
int main (void)
{
	int n;
	int x;
	int p;

	printf ("enter the number:");
	scanf ("%d", &x);
	printf ("\nenter the positon:");                                             
	scanf ("%d", &p);
	printf ("\nenter the number of bits:");                                             
	scanf ("%d", &n);     
	printf ("\nnumber before inverting :")
	showbits (x);
	printf ("\nnumber after inverting bits:" );
	showbits (invert (x, p, n));   
	
	return 0;

}
int invert (x,p,n)
{
	unsigned int key = 0;	

	key = ~ key;
	key = key << (n);
	key = (~ key ) << (p - n);
	x = x ^ key;
 
	return x;
 
}
#endif
#if 0

#define getbits(x, p, n) ( x = (x & (~ (~ 0 << n) << (p - 1))) >> p -1 );

int main (void)
{
	int x;
	int p;
	int n;
	int i = 0;
	
	printf ("enter the number x:")
	scanf("%d", &x);
	pritnf ("\n enter the postion p:");
	scanf ("%d", &p);
	printf ("\nenter the number of bits n:")
	scanf ("%d", &n);
	showbits (x);

 	getbits(x, p, n);

	printf("%d\n", x);

	showbits (x);

	return 0;
}

#endif

