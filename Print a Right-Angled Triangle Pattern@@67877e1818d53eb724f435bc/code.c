// Your code here...
#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for (int i=0; i<=rows;i++){
        for (int j=0;j<i;i++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}