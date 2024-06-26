#include <stdio.h>
void display(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void deletion(int arr[],int index,int n)
{
    for(int i=index;i<n-1;i++)
    {
    //if(arr[i]>=arr[index])
    
        arr[i]=arr[i+1];
    
    }
}
int main(){
    int arr[100]={3,5,7,83,45};
    int n=5;
    printf("Before deletion: ");
    display(arr,n);
    int index=2;
    deletion(arr,index,n);
    n=n-1;
    printf("After deletion: ");
    display(arr,n);
}