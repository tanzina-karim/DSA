#include<stdio.h>

void Quicksort(int arr[],int lb,int ub){
    int loc;
    if(lb<ub){
      loc=partition(arr,lb,ub);
     Quicksort(arr,lb,loc-1);
     Quicksort(arr,loc+1,ub);
    }
}
 void swap(int* a,int* b){
   int temp=*a;
   *a=*b;
   *b=temp;

 }

int partition(int arr[],int lb,int ub){
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end){
    while(arr[start]<=pivot){
        start++;
    }
    while(arr[end]>pivot){
        end--;
    }
    
    if(start<end){
        swap(&arr[start],&arr[end]);
    }
    }
     swap(&arr[lb],&arr[end]);
    return end;

}

int main(){
    int arr[]={16,24,6,9,1,5,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lb=0;
    int ub=n-1;
    Quicksort(arr,lb,ub);
    printf("After sorting array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}