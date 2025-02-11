#include <stdio.h>

const char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    switch (c) {
        case 1:
            printf("%d\n", a + b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", a / b);
            }
            break;
    }
    return 0;
}
