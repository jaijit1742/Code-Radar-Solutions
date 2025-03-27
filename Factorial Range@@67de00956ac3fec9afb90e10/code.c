int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int factorialRange(int start,int end){
    if(0>start){
        printf("Invalid range");
    }
    else if(start>end){
        printf("Invalid range");
    }
    else{
    for(int i=start;i<=end;i++){
        printf("%d\n",fact(i));
    }}
}