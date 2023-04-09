
#include <stdio.h>

int main(void) {
    int num,n,Bit=0,i;
    
    printf("Input any number: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &num);        // 8  1000
	 
	for( n=0 ; n<=8*(sizeof(num)) ; n++ )
    {
		Bit=num>>n;       //  8>>1  =  0100 = 6 (6%2!=1)False continue  ------  8>>2 =0010 = 2 (2%2!=1)False continue------- 8>>3 =0010 = 1 (1%2=1) then break
		i=Bit%2;
		if(i==1)
		{
			break;
		}
	}
    printf("Lowest order set bit in %d is %d.\n",num,n);
    
    return 0;
}
