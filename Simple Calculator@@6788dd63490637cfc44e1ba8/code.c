#include <stdio.h>


int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c){
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        case 4:
        if (b==0){
            printf("Division by zero");
            break;
        }
        else{
            printf("%d",a/b);
            break;
        }
        default:
        printf("Error: Invalid Operation");

    }
    return 0;
}
