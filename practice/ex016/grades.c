#include <stdio.h>
#include <stdlib.h>

int main() {
    float grade1, grade2, grade3, grade4, average;
    grade1 = grade2 = grade3 =grade4 = average = 0;

    printf("\t\t\t\t School Grades 1.0\n");
    printf("Type your first bimester grade: ");
    scanf("%f", &grade1);
    printf("Type your second bimester grade: ");
    scanf("%f", &grade2);
    printf("Type your third bimester grade: ");
    scanf("%f", &grade3);
    printf("Type your forth bimester grade: ");
    scanf("%f", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4;
    printf("Your average is: %f \n", average);

    if (average < 7) {
        printf("You're REPROVED!!!");
    } else {
        printf("Congrats! You're passed!");
    }
    return 0;
}