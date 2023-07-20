#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

