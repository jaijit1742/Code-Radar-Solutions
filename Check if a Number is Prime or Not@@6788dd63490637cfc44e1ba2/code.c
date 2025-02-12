// Your code here...
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a<2){
        printf("Not Prime");
    }
    for (int i=2, i<=a;i++){
        if (a%i==0){
            printf("Not prime");
        }
    printf("Prime");    
    }
    return 0;
}