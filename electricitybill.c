#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units >= 1 && units <= 10) {
        bill = units * 10.0;  
        bill -= bill * 0.10;  
    } else if (units >= 11 && units <= 20) {
        bill = units * 10.0;
        bill -= bill * 0.15;  
    } else if (units >= 21 && units <= 40) {
        bill = units * 10.0;
        bill -= bill * 0.30;  
    } else if (units >= 50) {
        bill = units * 10.0;
        bill -= bill * 0.50;  
    } else {
        printf("Invalid number of units.\n");
        return 0;
    }

    printf("Electricity Bill: %.2f rupees\n", bill);

    return 0;
}

