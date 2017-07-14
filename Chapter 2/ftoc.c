#include <stdio.h>

int main (void)
{
    float f = 27.0;
    float c = (f - 32) / 1.8;

    printf("%g in fahrenheit is %f in celsius.", f, c);

    return 0;
}