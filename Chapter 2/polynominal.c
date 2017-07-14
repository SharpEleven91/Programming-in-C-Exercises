#include <stdio.h>

int main(void)
{
    float x = 2.55;

    long float sum = (5 * (x * x * x)) - (5 * (x * x)) + 6;

    printf("The sum of 3x3 - 5x2 + 6 is %e\n", sum);

    return 0;
}