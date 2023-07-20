#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series of %d terms: ", n);

    while (n > 0) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;

        n--;
    }

    printf("\n");

    return 0;
}

