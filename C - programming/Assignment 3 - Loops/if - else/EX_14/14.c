#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ang1 , ang2 ,ang3 ;
	
	printf("Enter the first angle : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&ang1);
	
	printf("Enter the second angle : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&ang2);
	
	printf("Enter the third angle : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&ang3);
	
	if ((ang1+ang2+ang3)==180)
	printf("The triangle is valid"); 
	else
	printf("The triangle is not valid");
	
	
	return 0;
}