#include <stdio.h>

int main(void)
{
    float val1, val2;
    char operator;

    printf("Please input your expression: ");
    scanf("%f %c %f", &val1, &operator, &val2);

    if ( operator == '+')
        printf("%.2f + %.2f = %.2f\n", val1, val2, val1 + val2);
    else if ( operator == '-')
        printf("%.2f - %.2f = %.2f\n", val1, val2, val1 - val2);
    else if ( operator =='/')
        if ( val2 == 0 )
            printf("Cannot divide by zero.\n");
        else
            printf("%.2f / %.2f = %.2f\n", val1, val2, val1 / val2);
    else if ( operator == '*')
        printf("%.2f * %.2f = %.2f\n", val1, val2, val1 * val2);

    else
        printf("Unknown Operator.\n");

    return 0;
}