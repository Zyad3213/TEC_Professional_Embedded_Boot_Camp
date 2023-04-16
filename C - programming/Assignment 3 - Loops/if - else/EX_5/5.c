#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ;
	
	printf("Enter an integer number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	
    if(num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
	
	return 0;
}