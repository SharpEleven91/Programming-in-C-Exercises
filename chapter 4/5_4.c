#include <stdio.h>

int main(void)
{
    int leap_4, leap_100, leap_400, year;

    printf("Please input the year to check: ");
    scanf("%i", &year);

    leap_4 = year % 4;
    leap_100 = year % 100;
    leap_400 = year % 400;

    if ( leap_4 == 0 && leap_100 != 0 || leap_400 == 0 )
        printf("%i is a leap year.\n", year);
    else
        printf("%i is not a leap year.\n", year);

    return 0;
}