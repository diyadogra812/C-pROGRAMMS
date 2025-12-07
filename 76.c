#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
        return 1; // Exit program
    }

    // Assign grade based on marks
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("The student's grade is: %c\n", grade);

    return 0;
}
