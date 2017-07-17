#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Please type two integers to be compared: ");
    scanf("%i%i", &first, &second);

    if ( second == 0 ) {
        printf("You cannot divide by 0");
        return 0;
    }

    if ( first % second == 0 )
        printf("%i is evenly divisible by %i\n", first, second);
    else {
        printf("%i is not evenly divisible by %i\n", first, second);
        printf("The remainder is %i\n", first % second);
    }
    
    return 0;
}