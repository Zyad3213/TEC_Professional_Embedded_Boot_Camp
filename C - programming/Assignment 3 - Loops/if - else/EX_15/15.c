#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int side1 , side2 ,side3 ;
	
	printf("Enter the first side : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&side1);
	
	printf("Enter the second side : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&side2);
	
	printf("Enter the third side : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&side3);
	
	if (((side1+side2)>side3)&&((side3+side2)>side1)&&((side1+side3)>side2))
	printf("The triangle is valid"); 
	else
	printf("The triangle is not valid");
	
	
	return 0;
}