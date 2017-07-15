#include <stdio.h>

int main(void)
{
    int triangularNumber = 5;

    printf("NUMBER              TRIANGULAR NUMBER\n");
    while ( triangularNumber != 55) {
        printf("%2i                         %4i\n", triangularNumber, triangularNumber * (triangularNumber + 1) / 2);
        triangularNumber += 5;
    }
}