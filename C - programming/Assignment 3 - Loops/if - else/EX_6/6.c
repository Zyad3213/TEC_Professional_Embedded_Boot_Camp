#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int year ;
	
	printf("Enter an integer number"); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&year);
	
    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("COMMON YEAR");
    }
	
	return 0;
}