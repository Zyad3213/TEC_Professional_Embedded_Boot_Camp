
#include <stdio.h>


int mult(int a, int b) {
    int result = a * b;
    return result;
}

int div(int a, int b) {
    int result = a / b;
    return result;
}

int sum(int a, int b) {
    int result = a + b;
    return result;
}

int sub(int a, int b) {
    int result = a - b;
    return result;
}

int main(void) {
    int num_1, num_2, res;
    char x;

    printf("Enter the first number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num_1);

    printf("Enter the second number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num_2);

    printf("Enter / or * or - or + : ");
    fflush(stdin);
    fflush(stdout);
    scanf(" %c", &x);


     switch(x) {
        case '/':
            res = div(num_1,num_2);
            printf(" The result of %c is = %d ", x, res);
            break;

        case '*':
            res = mult(num_1,num_2);
            printf(" The result of %c is = %d ", x, res);
            break;

        case '-':
            res = sub(num_1,num_2);
            printf(" The result of %c is = %d ", x, res);
            break;

        case '+':
            res = sum(num_1,num_2);
            printf(" The result of %c is = %d ", x, res);
            break;

        default:
            printf("Invalid operator");
     }

     return 0;
}