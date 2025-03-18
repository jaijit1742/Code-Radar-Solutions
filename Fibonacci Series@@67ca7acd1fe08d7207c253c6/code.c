#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c;
    
    if (n == 1) {
        printf("0\n");
        return;
    }

    printf("0 1 "); // Print first two numbers

    for (int i = 2; i < n; i++) { // Start from 2 since 0 and 1 are already printed
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n"); // New line for clean output
}
