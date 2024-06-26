#include<stdio.h>


void print_recursive_1_n(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    print_recursive_1_n(n-1);
}

void print_normal_1_n(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
}

int main(){
    print_recursive_1_n(9);
    return 0;
}