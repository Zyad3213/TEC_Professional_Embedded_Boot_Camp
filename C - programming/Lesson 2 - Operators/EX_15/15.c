#include "stdio.h"
int main(void)
{
	int num_1,num_2;
	printf("Enter the first number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_1);
	
	printf("Enter the second number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_2);
	
	num_1 = num_1 ^ num_2;
	num_2 = num_1 ^ num_2;
	num_1 = num_1 ^ num_2;

	printf("The first number after swapping = %d and the second = %d",num_1,num_2);
	return 0 ;
	
}


