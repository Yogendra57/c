#include <stdio.h>

int main() {
    int num = 100;

    printf("Even numbers from 100 to 1:\n");

    while (num >= 1) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num--;
    }

    printf("\n");

    return 0;
}

