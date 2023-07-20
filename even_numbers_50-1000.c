#include <stdio.h>

int main() {
    int num = 50;

    while (num <= 1000) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }

    return 0;
}

