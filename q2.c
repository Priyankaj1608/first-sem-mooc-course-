/* Develop a C program that takes a student's marks as input and displays their grades based on the folowing criteria; 90 and above:Grade A, 89 to 75:Grade B,  74 to 60:Grade C, 59 to 50:Grade D, below 50:Grade E. Choose a suitable control structure to implement this logic*/
#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks");
        scanf("%i",&marks);
    if (marks>100 || marks<0){
    printf("ERROR !! Enter the correct marks:\n");
                        }
        else if(marks>=90){
    printf("Your Grade is A");
        }
    else if (marks>=75){
        printf("Your Grade is B");
    }            
else if (marks>=60){
    printf(" Your Grade is C");
   }
    else if (marks>=50){
        printf("Your Grade is D");
    }
    else if (marks<50){
        printf("Your Grade is E");
    }}
