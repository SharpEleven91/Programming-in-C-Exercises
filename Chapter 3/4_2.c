#include <stdio.h>

int main(void)
{
    int triangularNumber = 0;

    for (int n = 1; n <= 200; n++)
        triangularNumber = triangularNumber + n;

    printf("The 200th Triangular Number is %i\n", triangularNumber);

    return 0;
}