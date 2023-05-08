#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char c;
    printf("enter the string :");
    gets(str);
    printf("enter the character to remove:");
    scanf("%c",&c);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if (str[i]==c){
            for(int j=i;j<len;j++){
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
    }
    printf("The string after removal of %c is :",c);
    puts(str);
    return 0;
}