// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    // int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int nst=1;
        for(int k=1;k<=nsp;k++){

            printf(" ");
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            char ch=(char)(j+64);
            printf("%c ",ch);
        }
        nst++;
        printf("\n");
    }
    }