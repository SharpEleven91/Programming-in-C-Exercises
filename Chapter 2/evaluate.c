#include <stdio.h>

int main(void)
{
    long float sum = (3.31 * 10e-8 * 2.01 * 10e-7) / (7.16 * 10e-6 + 2.01 * 10e-8);

    printf("The sum of (3.31 * 10e-8 * 2.01 * 10e-7) / (7.16 * 10e-6 + 2.01 * 10e-8) is %lf", sum);

    return 0;
}