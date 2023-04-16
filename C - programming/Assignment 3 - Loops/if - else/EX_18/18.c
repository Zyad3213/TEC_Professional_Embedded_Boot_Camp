#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cost , sell ;
	
	printf("Input cost price: "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&cost);
	
	printf("Input selling price: "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&sell);
	
    if(cost>sell)
    {
        printf("Loss = %d",cost-sell);
    }
    else
    {
        printf("Profit = %d",sell-cost);
    }
	
	return 0;
}

