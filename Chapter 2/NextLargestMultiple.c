#include <stdio.h>

int main(void)
{
    int i, j;

    i = 356;
    j = 7;
    printf("From %i to the next largest even multiple of %i is %i\n", i, j, i + j - (i % j));

    i = 12258;
    j = 23;
    printf("From %i to the next largest even multiple of %i is %i\n", i, j, i + j - (i % j));

    i = 996;
    j = 4;
    printf("From %i to the next largest even multiple of %i is %i\n", i, j, i + j - (i % j));

    return 0;
}