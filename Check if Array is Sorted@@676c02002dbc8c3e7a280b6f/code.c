// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int flag=1; 

    for(int i=0; i<n-1; i++){ 
        if(arr[i] > arr[i+1]){ 
            flag=0;
            break;
        }
    }

    if(flag==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

    return 0;

}