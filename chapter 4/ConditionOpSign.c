#include <stdio.h>

int main(void)
{
    int n, sign;

    printf("Please type in a number: ");
    scanf("%i", &n);

    sign = ( n < 0 ) ? -1 : (( n == 0 ) ? 0 : 1);

    printf("%i", sign);
}