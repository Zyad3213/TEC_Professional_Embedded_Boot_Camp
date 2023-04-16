
#include <stdio.h>

int main()
{
    int num,check;

    printf("Enter an integer number : ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &num);
	
	check = num%2;

	switch(check)
	{
    
	case 0 :
	  printf("the number is even");
    break;
	
	case 1 :
	  printf("the number is odd");
    break;	

	}
    return 0;
}