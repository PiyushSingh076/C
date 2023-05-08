#include<stdio.h>
int main(){
    int n2,n3;
    for (int i=100;i<=333;i++){
        int temp=i;
        int d1=temp%10;
        temp=temp/10;
        int d2=temp%10;
        int d3=temp/10;
        if (d1!=d2 && d2!=d3){
            n2=2*i;
        }
        int temp2=n2;
        int r1=temp2%10;
        temp2=temp2/10;
        int r2=temp2%10;
        int r3=temp2/10;
        if(r1!=r2 && r2!=r3){
            n3=3*i;
        }
        int temp3=n3;
        int s1=temp3%10;
        temp3=temp3/10;
        int s2=temp3%10;
        int s3=temp3/10;
        if(s1!=s2 && s2!=s3){
            printf("%d %d %d",i,n2,n3);
        }

        
    }
    printf("\n");
    return 0;
}