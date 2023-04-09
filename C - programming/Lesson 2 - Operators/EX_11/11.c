#include <stdio.h>

int main()
{
    int num, flip;

    printf("Enter any number: ");
	fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    flip= ~num;

    printf("The number before fliping = %d \n", num);
    printf("The number after fliping = %d \n", flip);

    return 0;
}