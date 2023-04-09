

#include <stdio.h>

int main(void) {
    int num,n,Bit=0;
    
    printf("Input any number: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &num);
	 
	for( n=0 ; n<=8*(sizeof(num)) && Bit!=1 ; n++ )
    {
		Bit=num>>n;
	}
    printf("Highest order set bit in %d is %d.\n",num,n);
    
    return 0;
}
