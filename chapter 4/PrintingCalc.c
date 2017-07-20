#include <stdio.h>

int main(void)
{
    char operator;
    float sum = 0;
    float operand = 0;
    _Bool end = 0;
    
    printf("Begin calculations: ");
    while(!end) {
        scanf("%f %c", &operand, &operator);
        switch(operator)
        {
            case '+':
                sum = operand + sum;
                printf("= %.6f\n", sum);
                break;
            case '-':
                sum = sum - operand;
                printf("= %.6f\n", sum);
                break;
            case '*':
                sum = sum * operand;
                printf("= %.6f\n", sum);
                break;
            case '/':
                if (operand == 0)
                    printf("Cannot divide by Zero. Try something else.\n");
                else 
                    sum = sum / operand;
                    printf("= %.6f\n", sum);
                break;
            case 'S':
                sum = operand;
                printf("= %.6f\n", sum);
                break;
            case 'E':
                end = 1;
                printf("End of Calculations.\n");
                break;
            default:
                printf("Unknown operator please try again.\n");
                break;
        }
    }
}