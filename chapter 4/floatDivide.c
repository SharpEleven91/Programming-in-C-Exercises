#include <stdio.h>

int main(void)
{
    int first, second;
    
    printf("Please type in the two integers to divide: ");
    scanf("%i%i", &first, &second);

    printf("The result of %i / %i = %.3f", first, second, (float) first / second);

    return 0;
}