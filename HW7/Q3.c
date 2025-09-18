// GitHub: https://github.com/alitalhq

/*
 * You need to write a program that stores students’ grades in a class. Follow these steps:
 * 
 * a) Using Arrays:
 * Get the number of students in the class from the user.
 * Store each student’s grade in an array (list) entered by the user.
 * 
 * b) Using Functions:
 * Write a function to calculate the average: CalculateAverage
 * Write a function to find the highest grade: HighestGrade
 * Write a function to list the grades of passing students (this function should return the grades of students who meet a certain passing grade): PassingStudents
 */

#include <stdio.h>
#include <stdlib.h>

float CalculateAverage(int grades[], int count);
int HighestGrade(int grades[], int count);
void PassingStudents(int grades[], int count, float passing_grade);

int main(void){
    int count, max;
    float avg;
    printf("Enter the number of students in the class: ");
    scanf("%d",&count);
    int grades[count];
    for (int i=0 ; i<count ; i++){
        printf("Grade of student %d: ",i+1);
        scanf("%d",&grades[i]);
    }
    printf("\n");
    avg = CalculateAverage(grades, count);
    printf("\nClass Average: %f", avg);
    max = HighestGrade(grades, count);
    printf("\nHighest Grade: %d", max);
    int passing_grade = ((int)avg / 10) * 10 - 10;
    printf("\nPassing Grade: %d", passing_grade);
    printf("\nGrades of Passing Students: ");
    PassingStudents(grades, count, passing_grade);

    return 0;
}

float CalculateAverage(int grades[], int count){
    float sum = 0;
    for (int i=0;i<count;i++){
        sum += grades[i];
    }
    return sum / count;
}

int HighestGrade(int grades[], int count){
    int max = 0;
    for (int i=0; i<count; i++){
        if(grades[i] > max){
            max = grades[i];
        }
    }
    return max;
}

void PassingStudents(int grades[], int count, float passing_grade){
    for (int i = 0; i<count; i++){
        if(grades[i] >= passing_grade){
            printf("%d ", grades[i]);
        }
    }
    printf("\n");
    return;
}
