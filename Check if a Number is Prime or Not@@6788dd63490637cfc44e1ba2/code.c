#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a < 2) {
        printf("Not Prime");
        return 0;
    }

    // Instead of sqrt(a), use i * i <= a
    for (int i = 2; i * i <= a; i++) {  
        if (a % i == 0) {  
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");
    return 0;
}
