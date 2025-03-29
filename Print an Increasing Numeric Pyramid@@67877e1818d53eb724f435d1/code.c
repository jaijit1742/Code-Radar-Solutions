// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=nsp;i++){
        printf(" ");
    }
    nsp--;
    for(int j=1;j<=nst;j++){
        printf("%d ",j);

    }
    nst+=2;
    printf("\n");
}