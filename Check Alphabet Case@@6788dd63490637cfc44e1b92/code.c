#include <stdio.h>
#include <ctype.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if (ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}