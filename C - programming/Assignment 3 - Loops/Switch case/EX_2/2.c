
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &month);

	switch(month)
	{
    
	case 1 :
	case 3 :
	case 5 :
	case 8 :
	case 7 :
	case 10:
	case 12:
	  printf("31 days");
    break;
	
	
	case 4 :
	case 6 :
	case 9 :
	case 11:
	
	  printf("31 days");
    break;	
	
	case 2 :
	
	printf("28 or 29 days");
    break;
	}
    return 0;
}