#include <stdio.h>

int main(void)
{
    int number, right_digit;

    printf("Enter your number: ");
    scanf("%i", &number);
    if (number >= 0) {
        do {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
        while ( number != 0 );
        printf("\n");
    }
    else {
        number = number - number - number;
        do {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
        while ( number != 0 );
        printf("-\n");
    }
    

    return 0;
}