#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("%c is an alphabet.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c is a digit.\n", character);
    } else {
        printf("Neither an alphabet nor a digit.\n");
    }

    return 0;
}

