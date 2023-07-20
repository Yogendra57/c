#include <stdio.h>

int main() {
    int rollNumber, physics, chemistry, computerApplication, English, Hindi;
    int totalMarks;
    float percentage;
    char division;

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNumber);

    printf("Input the marks of Physics, Chemistry, Computer Application, English, Hindi: ");
    scanf("%d %d %d", &physics, &chemistry, &computerApplication);

    totalMarks = physics + chemistry + computerApplication;
    percentage = (float)totalMarks / 3;

    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    if (physics >= 40 && chemistry >= 40 && computerApplication ) {
        if (percentage >= 80) {
            division = 'A';
        } else if (percentage >= 60) {
            division = 'B';
        } else if (percentage >= 50) {
            division = 'C';
        } else if (percentage >= 45) {
            division = 'D';
        } else {
            division = 'Average';
        }
    } else {
        division = 'Fail';
    }

    printf("Division: %c\n", division);

    return 0;
}

