#include "stdio.h"
int main(void)
{
	int num,n;
	printf("Input any number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Input bit position: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	num|=(1<<n);
	printf("Number after setting nth bit: %d in decimal",num);
	return 0 ;
	
}