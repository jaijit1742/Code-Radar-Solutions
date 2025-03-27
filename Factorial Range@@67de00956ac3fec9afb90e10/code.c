int fact(int num){
    int fact=1;
    for(int i=0;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int factorialRange(int start,int end){
    for(int i=start;i<=end;i++){
        printf("%d\n",fact(i));
    }
}