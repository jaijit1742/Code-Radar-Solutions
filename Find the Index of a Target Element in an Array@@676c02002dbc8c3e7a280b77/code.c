// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,found=0;
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
}