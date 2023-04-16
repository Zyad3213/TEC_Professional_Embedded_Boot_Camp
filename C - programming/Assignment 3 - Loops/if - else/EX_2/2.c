#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1 , num2 ,num3 ;
	
	printf("Enter the first number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);
	
	printf("Enter the srcond number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);
	
	printf("Enter the third number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num3);
	
	if ((num1>num2)&(num1>num3))
	printf("Maximum = %d",num1); 

	else if ((num2>num1)&(num2>num3))
	printf("Maximum = %d",num2);

	else
	printf("Maximum = %d",num3);
	
	
	return 0;
}