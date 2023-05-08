#include <stdio.h>
int main(){
    int r1,c1,r2,c2,a[100][100],b[100][100],prod[100][100];
    printf("....LETS CALCULATE PRODUCT OF TWO MATRIX....");
    printf("enter the number of rows for m1:");
    scanf("%d",&r1);
    printf("enter the number of colums for m1:");
    scanf("%d",&c1);
    printf("enter the number of rows for m2:");
    scanf("%d",&r2);
    printf("enter the number of colums for m2:");
    scanf("%d",&c2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("enter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("enter the element b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                prod[i][j]+= a[i][k]*b[k][j];/*k change hora matlab 
                next row me
                jaate jaara aur j same rehra toh 
                b11, b21,b31 bante jaara*/ 
                
            }           
        }
    }
    printf("The resultant matrix is-->\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){//since r1*c1 times r2*c2= r1*c2...
            printf("%d  ",prod[i][j]);
        }
        printf ("\n");
    }
    return 0;

}