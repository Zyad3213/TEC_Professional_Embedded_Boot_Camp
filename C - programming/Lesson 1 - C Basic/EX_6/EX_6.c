#include "stdio.h"
int main(void)
{
	int x=0,y=0,z=0;
printf("Enter Two Integer Numbers");	
scanf("%d%d",&x,&y);
z=x+y;
printf("The Sum of Two number = %d\n",z);
z=x-y;
printf("The subtraction of Two number = %d\n",z);
z=x*y;
printf("The multiplication of Two number = %d\n",z);
z=x/y;
printf("The Division of Two number = %d\n",z);
z=x%y;
printf("The Remainder of Two number = %d\n",z);
return 0;
}