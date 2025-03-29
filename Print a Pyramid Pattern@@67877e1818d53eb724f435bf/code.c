// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=i-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst+=2;
        pritnf("\n");
    }
    return 0;
    }
