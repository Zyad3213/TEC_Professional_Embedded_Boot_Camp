#include <stdio.h>

int main(void) {
    int num, n, BIT = 0;
    printf("Input any number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    printf("Input bit position: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    BIT = num | (1 << n);
    BIT = BIT >> n;
    printf("%d bit of %d is set (%d)\n", n, num, BIT);
    return 0;
}