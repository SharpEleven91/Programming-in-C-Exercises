#include <stdio.h>

int main(void)
{
    int digit = 0, number = 0, reversed = 0, length = 0;

    //get user input
    printf("Please input a Three-Digit Number: ");
    scanf("%i", &number);

    //reverse number input and store length
    while (number != 0) {
        reversed *= 10;
		reversed = reversed + number % 10;
		number /= 10;
        length++;
    }

    //reverses the reversed number input iterating length number of times
    do  {
        digit = reversed % 10;
        reversed /= 10;

        switch (digit) {
            case 0:
                printf("Zero ");
                number = number / 10;
                break;
            case 1:
                printf("One ");
                number = number / 10;
                break;
            case 2:
                printf("Two ");
                number = number / 10;
                break;
            case 3:
                printf("Three ");
                number = number / 10;
                break;
            case 4:
                printf("Four ");
                number = number / 10;
                break;
            case 5:
                printf("Five ");
                number = number / 10;
                break;
            case 6:
                printf("Six ");
                number = number / 10;
                break;
            case 7:
                printf("Seven ");
                number = number / 10;
                break;
            case 8:
                printf("Eight ");
                number = number / 10;
                break;
            case 9:
                printf("Nine ");
                number = number / 10;
                break;
            }
            length--; 
        } while (length != 0);
        printf("\n");   
}