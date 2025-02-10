#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    char cd[10];
    char ef[10];
    int n;
    scanf("%s %d %s",&cd,&n,&ef);
    printf("Name: %s\n",cd);
    printf("Age: %d\n",n);
    printf("Hobby: %s",ef);
    return 0;
}