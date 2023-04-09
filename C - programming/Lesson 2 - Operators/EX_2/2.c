#include "stdio.h"
int main(void)
{
	int num,MSB=0;
	printf("Input any number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	MSB=num>>31;
	printf("Most Significant Bit of %d is set (%d).",num,-1*MSB);
	return 0 ;
	
}


