#include<stdio.h>
int reversearray(int arr[],int n){
    int i=0;
    int j=n-1;
   // int temp=0;
    while(i<=j){
       int  temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;

    }
    return 1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int result=reversearray(arr,n);
    printf("After reverse array: ");
    if(result==1){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    }
}