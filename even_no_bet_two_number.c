#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid input: The first number should be less than the second number.\n");
        return 1;
    }

    printf("Even numbers between %d and %d are: ", start, end);

    
    if (start % 2 != 0) {
        start++;
    }

    while (start <= end) {
        printf("%d ", start);
        start += 2; 
    }

    printf("\n");

    return 0;
}

