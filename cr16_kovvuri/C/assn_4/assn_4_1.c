#include <stdio.h>
#if 0
struct frame {

	char VPI_1 : 4;
	char GFC : 4;
	char VCI_1 : 4;
	char VPI_2 : 4;
	char VCI_2 : 8;
	char CLP : 1;
	char : 1;
	char PTI :1;
	char : 1;
	char VCI_3 : 4;
	char HEC : 8;
} ;

int main (void)
{
	
	printf("size of structure frame is :%d\n", sizeof(struct frame));
	return 0;
}

#endif

#if 0

struct Frame {
	unsigned int Des_port : 16;
	unsigned int Src_port : 16;
	unsigned int Seq_num : 32;
	unsigned int Ack_num : 32;
	unsigned int Window : 16;
	unsigned int Code_bits : 6;
	unsigned int Reserved : 6;
	unsigned int Header_len: 4;
	unsigned int Urgent : 16;
	unsigned int Check_sum : 16;
	unsigned int options;
	unsigned int Data;

};

int main()
{
	printf ("size of struct frame %d\n",sizeof (struct Frame));

	return 0;
}
#endif
#if 1
struct Frame
{
	int version        :  4;
	int headerlength   :  4;
	int servicetype    :  8;
	int totallength    : 16;
	int identification : 16;
	int flags          :  4;
	int fragmentoffset : 12;
	int ttl            :  8;
	int protocol       :  8;
	int headerchecksum : 16;
	int sourceipaddr       ;
	int destinationipaddr  ;
	int options        : 20;
	int                : 12;
}f2;

int main(void)
{
	printf("%ld", sizeof(f2));
	return 0;
}
#endif
