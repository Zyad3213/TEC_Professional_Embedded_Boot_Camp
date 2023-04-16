#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1 ;
	
	printf("Enter an integer number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);
	
	if (num1>0)
	printf("%d is positive",num1); 

	else if (num1<0)
	printf("%d is negative",num1); 

	else
	printf("The number is Zero");
	
	
	return 0;
}