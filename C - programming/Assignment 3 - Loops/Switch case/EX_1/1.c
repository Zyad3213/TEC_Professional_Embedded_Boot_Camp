#include <stdio.h>

int main(void)
{
    int week;
    printf("Enter week number from 1 to 7: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &week);


	switch(week)
	{
		case 1 : 
		printf("Saturday"); 
		break;
		
		case 2 : 
		printf("Sunday"); 
		break;
		
		case 3 : 
		printf("Monday"); 
		break;
		
		case 4 : 
		printf("Tuesday"); 
		break;
		
		case 5 : 
		printf("Thursday"); 
		break;
		
		case 6 : 
		printf("Wednesday"); 
		break;
		
		case 7 : 
		printf("Friday"); 
		break;
	}
		
    return 0;
}