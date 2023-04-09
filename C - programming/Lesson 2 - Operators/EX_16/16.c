
#include <stdio.h>

int main(void) {
    int num;
    
    printf("Input any number: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &num);       
	 
	if (num&1)
		printf("The number is odd");
	else
		printf("The number is even");
	
    return 0;
}
