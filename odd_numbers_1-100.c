#include <stdio.h>

int main() {
    int num = 1;
    
    printf("Odd numbers from 1 to 100:\n");

    while (num <= 100) {
        printf("%d ", num);
        num += 2; 
    }

    printf("\n");

    return 0;
}

