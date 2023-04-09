
#include <stdio.h>

int main(void) {
    int num, count, i, j;
    int arr[32];

    printf("Input any number: ");
    fflush(stdout);
    scanf("%d", &num);

    printf("Enter the number of rotations: ");
    fflush(stdout);
    scanf("%d", &count);

    // Convert the input number into a binary array
    for (i = 0; i < 32; i++) {
        arr[i] = num & (1 << i) ? 1 : 0;
    }

    // Rotate the binary array
    for (i = 0; i < count; i++) {
        int temp = arr[0];
        for (j = 0; j < 31; j++) {
            arr[j] = arr[j + 1];
        }
        arr[31] = temp;
    }

    // Convert the binary array back to decimal and print it
    int result = 0;
    for (i = 31; i >= 0; i--) {
        result = result * 2 + arr[i];
    }
    printf("The rotated number is: %d\n", result);

    return 0;
}