
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x1, x2, p, q;
    printf("Enter coefficients of quadratic equation: ");
		fflush(stdin);fflush(stdout);
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    switch(D > 0)
    {
        case 1:
            x1 = (-b + sqrt(D)) / (2*a);
            x2 = (-b - sqrt(D)) / (2*a);
            printf("Roots are real and distinct: %.2f and %.2f", x1, x2);
            break;
        case 0:
            switch(D == 0)
            {
                case 1:
                    x1 = -b / (2*a);
                    printf("Roots are real and equal: %.2f", x1);
                    break;
                case 0:
                    p = -b / (2*a);
                    q = sqrt(-D) / (2*a);
                    printf("Roots are imaginary: %.2f + i%.2f and %.2f - i%.2f", p, q, p, q);
                    break;
            }
            break;
    }
    return 0;
} 
