#include <stdio.h>

int main(void)
{
    int n, twoN;

    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n          2 to the n\n");
    printf("---         ---------------\n");

    twoN = 1;

    for ( n = 0; n <= 10; n++)  {
        printf("%2i           %i\n", n, twoN);

        twoN *= 2;
    }

    return 0;
}