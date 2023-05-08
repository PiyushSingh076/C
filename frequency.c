#include <stdio.h>
int main(){
    int n;
    printf("enter the number of entries:");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("------------------------\n");
    printf("Element  |  Frequency\n");
    printf("------------------------\n");
    for (int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        printf("%d \t |\t %d\n",arr[i],count);
        
    }
    return 0;
}