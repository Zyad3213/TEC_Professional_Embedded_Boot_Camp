
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch ;
	
	printf("Enter a character : "); 
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }
	
	return 0;
}
