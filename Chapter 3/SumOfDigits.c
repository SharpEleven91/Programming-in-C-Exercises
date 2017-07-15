#include <stdio.h>

int main(void)
{
    int number;
    int digit = 0;

    printf("Input a number: ");
    scanf("%i", &number);

    printf("The sum of the digits in %i", number);
    while ( number != 0 )   {
        digit += number % 10;
        number = number / 10;
    }
    printf(" is %i", digit);
}