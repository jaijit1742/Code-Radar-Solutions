// Your code here...
int isPrime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int printPrimesInRange(int a, int b){
    if(a<b){
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }}
    else{
        printf("No prime numbers");
    }
}