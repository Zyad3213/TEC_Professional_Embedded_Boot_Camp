#include <stdio.h>

int main() {
    int n, x, sum;
    scanf("%d", &n);
    sum = 0;
    while (n != 0) {
        x = n % 10;
        sum += x;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
} 