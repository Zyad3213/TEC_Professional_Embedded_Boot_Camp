#include "stdio.h"
int main(void)
{
	int x=0,y=0;
printf("Enter The firsr Integer Number : ");	
scanf("%d",&x);
printf("Enter The Second Integer Number : ");	
scanf("%d",&y);
/*The First Method */
x=x+y;     //x=11,y=5
y=x-y;     // y=6
x=x-y;     //x=5

/* The second Method * 
x=x*y;    
y=x/y;    
x=x/y; 
*/

/* The third Method * 
x=x^y;    
y=x^y;    
x=x^y; 
*/


printf("After Swapping procces\n");
printf("Enter The firsr Integer Number = %d\n",x);
printf("Enter The Second Integer Number =%d\n",y);	

return 0;
}