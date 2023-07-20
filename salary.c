#include <stdio.h>

int main() {
    float salary;
    int holidays;
    float deduction = 0.0;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    printf("Enter the number of holidays: ");
    scanf("%d", &holidays);

    if (holidays == 1) {
        deduction = 0.0;
    } else if (holidays >= 2 && holidays <= 5) {
        deduction = 0.05 * salary;
    } else if (holidays >= 6 && holidays <= 14) {
        deduction = 0.10 * salary;
    } else if (holidays == 15) {
        deduction = 0.50 * salary;
    } else {
        printf("Invalid number of holidays.\n");
        return 0;
    }

    float finalSalary = salary - deduction;

    printf("Original Salary: %.2f\n", salary);
    printf("Deduction: %.2f\n", deduction);
    printf("Final Salary: %.2f\n", finalSalary);

    return 0;
}

