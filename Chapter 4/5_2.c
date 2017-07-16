#include <stdio.h>

int main(void)
{
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount= 0;
    float average;

    //Get user input for number of grades
    printf("How many grades will you be entering? ");
    scanf("%i", &numberOfGrades);

    //Get user input for grade scores
    for ( i = 1; i <= numberOfGrades; i++) {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);

        gradeTotal = gradeTotal + grade;

        if ( grade < 65 )
            failureCount++;
    }

    //Calculate grade average
    average = (float) gradeTotal / numberOfGrades;

    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", failureCount);

    return 0;
}