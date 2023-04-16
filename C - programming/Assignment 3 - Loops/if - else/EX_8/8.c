#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character ;
	
	printf("Enter a character : "); 
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);

    if ((character=='a')|| (character=='A') ||(character=='e') ||(character=='E') 
		                ||(character=='o')  ||(character=='O') ||(character=='u') 
	                    ||(character=='U')  ||(character=='i') ||(character=='I'))
    	printf("%c is vowel.",character);
	else
		printf("%c is constant.",character);
	
	return 0;
}
