#include <stdio.h>

int main(void) {
    int num, n, BIT = 0;
	
    printf("Input any number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
	
	
		for( n=0 ; n<8*(sizeof(num)) ; n++ )
    {
    BIT = num & (1 << n);
    BIT = BIT >> n;
    printf("%d" , BIT);
	}
    return 0;
}