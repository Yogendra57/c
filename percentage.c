#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;
    float percentage;
    char grade;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    percentage = (float)totalMarks / 5;

    if (percentage < 25) {
        grade = 'F';
    } else if (percentage >= 25 && percentage < 45) {
        grade = 'E';
    } else if (percentage >= 45 && percentage < 50) {
        grade = 'D';
    } else if (percentage >= 50 && percentage < 60) {
        grade = 'C';
    } else if (percentage >= 60 && percentage < 80) {
        grade = 'B';
    } else {
        grade = 'A';
    }

    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

