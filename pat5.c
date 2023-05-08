# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            printf(" ");
        }
        for (int k=n-i+1;k>=n-i+1;k--){
            printf("%d",k);
        }
        for (int p=1;p<=2*(i-1)-1;p++){
            printf("*");
        }
        for(int h=n-i+1;h>=n-i+1;h--){
            if(i!=1){
                printf("%d",h);
            }
            
        }
        printf("\n");
    }
    return 0;
}