#include<stdio.h>
int main(){
int arr[7]={12,21,43,4,5,67,6};
int x=4;
for(int i=0;i<=6;i++){
    if(arr[i]==x){
        printf("%d is present in the array and its index is %d",x,i);
        break;
    }
}
}
