#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp-=1;
        for(int k=1;k<=nst;k++){
            printf("%d",k);
        }
        nst+=2;
        printf("\n");
    }

}
