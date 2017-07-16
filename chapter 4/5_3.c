#include <stdio.h>

int main(void)
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number %i is even\n", number_to_test);

    else
        printf("The number %i is odd\n", number_to_test);

    return 0;
}