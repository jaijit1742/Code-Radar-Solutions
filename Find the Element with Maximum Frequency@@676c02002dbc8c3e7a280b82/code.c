// Your code here...
#include <stdio.h>
int sort(int arr[],int n){
    int most,max=0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>max){
                max=count;
                most=arr[i];
            }
            return most;

        }

    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sort(arr,n));
}