#include <stdio.h>

int main(void)
{
    int week;
    printf("Enter week number from 1 to 7: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &week);


    if(week == 1)
    {
		printf("Saturday"); 
    }
    else if(week == 2)
    {
		printf("Sunday");   
    }
    else if(week == 3)
    {
        printf("Monday");
    }
    else if(week == 4)
    {
        printf("Tuesday");
    }
    else if(week == 5)
    {
       printf("Thursday"); 
    }
    else if(week == 6)
    {
		printf("Wednesday");
    }
    else if(week == 7)
    {
		printf("Friday");
    }
    else
    {
        printf("Please enter number between 1-7.");
    }

    return 0;
}