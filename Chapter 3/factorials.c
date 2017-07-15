#include <stdio.h>

int main(void)
{
    int factorialized = 1;

    printf("NUMBER                FACTORIAL\n");

    for ( int i = 10; i >= 1; i-- ) {

        printf("%2i                     ", i);
        factorialized = i;

        for ( int j = i - 1; j >= 1; j--)   {
            factorialized *= j;
        }
        printf("%7i\n", factorialized);
    }

    return 0;
}