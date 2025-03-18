#include <stdio.h>

int fibonacciSeries(int n){
    int a=0,b=1;
    for (int i=0;i<n;i++){
        int c;
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}