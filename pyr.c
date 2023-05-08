# include <stdio.h>

int main(){
    int n, t=1;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        t=i;
        for(int j=1;j<=i;j++){
            printf("%d",t);
            t++;
        }
        t=t-2;
        for(int j=1;j<i;j++){
            printf("%d",t);
            t--;
        }
        
        printf("\n \n");
    }
    return 0;
    

}