#include<stdio.h>

int main(){

    int subjects, i;
    float marks, percentage, total = 0, average;
    char name;

    //Asking user for number of subjects

    printf("Enter the number of subjects:");
    scanf("%d", &subjects);

    //Input the marks of each subjects:
    for (i = 1; i <= subjects; i++){
        printf("Enter marks for each subject %d:", i);
        scanf("%f", &marks);
        total += marks; //Adding the marks to Total
    }

    //Calculate Average
    average = total / subjects;

    //Displaying result
    printf("\nTotal marks:%.2f", total);
    printf("\nAverage marks:%.2f", average);

    //Assigning grades
    if (average >= 90)
        printf("\nGrade: A+");
    else if (average >= 80)
        printf("\nGrade: A");
    else if (average >= 70)
        printf("\nGrade: B");
    else if (average >= 60)
        printf("\nGrade: C");
    else if (average >= 50)
        printf("\nGrade: D");
    else
        printf("\nGrade: F");

    percentage = total / subjects;
    printf("\nPercentage:%.2f", percentage);

    //Entering the name

    printf("\n%c", &name);

    return 0;
}