#include <stdio.h>
void printarray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertarray(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=temp;

    }
}
int main(){
 int arr[]={5,4,10,1,6,2};
 int n=sizeof(arr)/sizeof(arr[0]);
 printf("Before sorting: ");
 printarray(arr,n); 
 insertarray(arr,n); 
 printf("After sorting array: ");
 printarray(arr,n); 
}