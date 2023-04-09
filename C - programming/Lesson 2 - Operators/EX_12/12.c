
#include <stdio.h>

int main(void) {
    int num,n,Bit=0,i,ones=0,zeros=0;
    
    printf("Input any number: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &num);        // 8  1000
	 
	for( n=0 ; n<8*(sizeof(num)) ; n++ )
    {
		/*  8>>1 =0100 = 6 (6%2=0) sum 1 to zeros variable
		    8>>2 =0010 = 2 (4%2=0) sum 1 to zeros variable
		    8>>3 =0010 = 1 (1%2=1) sum 1 to ones  variable      */
			
		Bit=num>>n;      
		i=Bit&1;             
		if(i==1)		
		{
			ones++;
		}
		if(i==0)
		{
			zeros++;
		}
	}
    printf("The number of Zeros = %d \nThe number of ones = %d",zeros,ones);
    
    return 0;
}
