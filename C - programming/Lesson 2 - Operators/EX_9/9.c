#include <stdio.h>

int main(void) {
    int num,i=0, n, x ;
	
    printf("Input any number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
	

	
		for( n=0 ; n<8*(sizeof(num)) ; n++ )             // i want to cast the number to char
    {
		x=num>>n;           // x = 1001 0000 0000
        (char)x;            // x = 1001
		if(x==0)            // if  ( 1001 == 0 )
		i++;
	}
	printf("Trailing zeros: %d \n",i);
    return 0;
}