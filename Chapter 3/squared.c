#include <stdio.h>

int main(void)
{
    int count = 1;

    printf("Number          Squared\n");
    while (count <= 10) {
        printf("%2i                %4i", count, count * count);

        count++; 

        printf("\n");      
    }
}