#include <stdio.h>


int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        case '/':
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
        break;
    }
    return 0;
}
