#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1 , num2 ;
	
	printf("Enter the first number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);
	
	printf("Enter the srcond number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);
	
	if (num1>num2)
	printf("Maximum = %d",num1); 

	else if (num2>num1)
	printf("Maximum = %d",num2);

	else
	printf("The first number equal to the second number %d = %d",num1,num2);
	
	
	return 0;
}