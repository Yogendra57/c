#include <stdio.h>

int main() {
    int number = 2; 

    printf("Even numbers from 1 to 100:\n");

    while (number <= 100) {
        printf("%d\n", number);
        number += 2; 
    }

    return 0;
}

