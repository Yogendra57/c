#include <stdio.h>

int main() {
    int i = 1, j;

    while (i <= 10) {
        printf("Mathematical table for %d:\n", i);
        j = 1;
        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

