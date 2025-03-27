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
    int flag=1; // added flag

    for(int i=0; i<n-1; i++){ // change i<=n to i<n-1
        if(arr[i] > arr[i+1]){ // correct comparison
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