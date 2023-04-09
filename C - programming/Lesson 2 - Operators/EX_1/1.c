#include "stdio.h"
int main(void)
{
	int num,LSB=0;
	printf("Input any number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	LSB=1&num;
	printf("Least Significant Bit of %d is set (%d).",num,LSB);
	return 0 ;
	
}


