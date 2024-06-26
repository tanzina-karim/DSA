#include<stdio.h>
 
int Binary_search(int arr[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key)
        return mid-1;
        else if(arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main(){
    int arr[]={-4,-3,-2,-1,0,1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int key =0;
    int result=Binary_search(arr,low,high,key);
    printf("Negative index found at %d.",result);
    //printf("%d is found index %d",key,result);
    return 0;
}