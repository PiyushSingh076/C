#include <stdio.h>
int binarysearch(int arr[],int low,int high, int n);
int main(void){
    int n;
    int arr[]={1,4,6,8,3,7,9,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("enter the number to search:");
    scanf("%d",&n);
    int result=binarysearch(arr,0,size-1,n);
    if (result==-1){
        printf("not found");
    }
    else{
        printf("your number is at index:%d",result);
    }
    return 0;
}
int binarysearch(int arr[],int low ,int high,int n){
    while (low<=high){
        int mid= (low + high)/2;
        if (arr[mid]==n){
            return mid;
        }
        else if (arr[mid]<n){
            low=mid +1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}