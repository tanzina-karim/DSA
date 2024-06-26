#include <stdio.h>
#define n 5

void printarray(int arr[],int N){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    
    int arr[n]={15,16,6,8,5};
    printf("Before sorting array: ");
    printarray(arr,n);
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;

    }
    printf("After sorting array: ");
    printarray(arr,n);

}