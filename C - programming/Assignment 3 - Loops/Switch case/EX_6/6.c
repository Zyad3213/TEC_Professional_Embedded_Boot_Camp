
#include <stdio.h>

int main()
{
    int num,check;

    printf("Enter an integer number : ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &num);
	
	if(num!=0)
	check = num>=0 ? 1 : -1 ;

	switch(check)
	{
    
	case 1 :
	  printf("the number is positive");
    break;
	
	case -1 :
	  printf("the number is negative");
    break;	
	
	default :
	{
		printf("The numbers is equal zero ");
		break;
	}

	}
    return 0;
}