#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int t=i;
        for (int j=1;j<=i;j++){
            printf("%c",64+t);
            t++;

        }
        printf("\n");
    }
    return 0;
}
