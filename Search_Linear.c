// Linear Search
#include<stdio.h>
int main(){
    int arr[8]={20,32,52,43,62,72,74,322};
    int data=62;
    int found=0;
    for(int i=0;i<8;i++){
        if(arr[i]==data){
            printf("Data found at index: %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Data not found!");
    }
    return 0;
}