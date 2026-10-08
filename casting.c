#include <stdio.h>

int main() {
 // using casting for average calculation of the students' grade.
    int grade1,grade2,grade3;
    double average;
    printf(" Enter your first grade: \n");
    scanf("%d",&grade1);
    printf("Enter your second grade: \n");
    scanf("%d",&grade2);
    printf("Enter your third grade: \n");
    scanf("%d",&grade3);
    average = ((double)grade1+(double)grade2+(double)grade3)/3;
        printf("The average grade of the student is %lf",average);
    return 0;
}