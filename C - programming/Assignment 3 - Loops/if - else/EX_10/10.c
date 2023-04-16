
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch ;
	
	printf("Enter a character : "); 
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lower character .", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is upper character .", ch);
    }
    else 
    {
        printf("'%c' is not  an alphabet.", ch);
    }
	
	return 0;
}
