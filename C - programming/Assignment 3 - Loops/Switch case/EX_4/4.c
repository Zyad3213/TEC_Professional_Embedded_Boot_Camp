
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1 , num2 ,check;
	
	printf("Enter the first number : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);
	
	printf("Enter the srcond number : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);
	
	check = (num1>num2)? 1 : 2 ;
	
	switch (check)
	{
	case 1 :
	{
		printf("The first number is the biggest");
	break ;
	}
	
	case 2 :
	{
		printf("The secondS number is the biggest");
	break ;
	}
	
	default :
	{
		printf("The two numbers are equal.");
		break;
	}
	}
	return 0;
}