#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=b*b;
    if (c==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}