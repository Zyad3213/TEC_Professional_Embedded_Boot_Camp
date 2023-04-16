#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character ;
	
	printf("Enter a character : "); 
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);

    if ((character>=65 && character<=90) || (character>=97 && character<=120))
    	printf("%c is not an alphabet.",character);
	else
		printf("%c is an alphabet.",character);
	
	return 0;
}
