# include <stdio.h>
long factorial(int );
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){

        for (int j=0;j<=(n-i-1);j++)
            printf(" ");
        
        for (int j=0;j<=i;j++){
            printf("%ld",factorial(i)/(factorial(j)*factorial(i-j)));
            printf(" ");
        }
        printf("\n");    
    }
    return 0;
        
}
long factorial(int n){
    int c;
    long result=1;
    for (c=1;c<=n;c++){
        result =result*c;
    

    }
    return result;
    

}