#include <stdio.h>
void bubblesort(int arr[],int size);
void printarray(int arr[],int size);
int main(){
    int n,arr[100];
    printf("enter the size of the array:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;

}
void bubblesort(int arr[],int size){
    for (int i=0;i<size-1;i++){/* ye comparison multiple times 
    karwane ke liye */
        for(int j=0;j<size-i-1;j++){ /*left ko right se compare karane
        ke liye , size -i-1 kyuki last me chorne ke baad ab 2nd last tk hi matlab and so on*/
            if (arr[j]>arr[j+1]){// simply swapping is taking place
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]); 
         
    }
}