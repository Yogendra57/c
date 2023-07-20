#include <stdio.h>

int main() {
    char ch;
    int digitCount = 0;

    printf("Enter a number: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            digitCount++;
        }
    }

    printf("Number of digits entered: %d digits\n", digitCount);

    return 0;
}

