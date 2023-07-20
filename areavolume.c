#include <stdio.h>

int main() {
    int choice;
    float side, area;

    printf("Shape Calculation Menu:\n");
    printf("1. Calculate the area of a triangle\n");
    printf("2. Calculate the area of a square\n");
    printf("3. Calculate the area of a rectangle\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float base, height;
        printf("Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("Enter the height of the triangle: ");
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("The area of the triangle is: %.2f\n", area);
    } else if (choice == 2) {
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("The area of the square is: %.2f\n", area);
    } else if (choice == 3) {
        float length, width;
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);
        area = length * width;
        printf("The area of the rectangle is: %.2f\n", area);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

