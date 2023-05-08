#include <stdio.h>
int main(){
    int n,t;
    for (int i=1;i<=n;i++){
        t=1;
        for(int j=1;j<=5;j++){
            printf("%d",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}