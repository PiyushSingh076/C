# include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    char c;
    printf("enter the string:");
    gets(str);
    int len=strlen(str);
    printf("enter the char to remove:");
    scanf("%c",&c);
    int i=0;
    while(str[i]!=c){
        i++;
    }
    while(i<len){ //this i is starting from the index of the char to be removed
        str[i]=str[i+1];
        i++;
    }
    printf("string after removing first %c is %s",c,str);
    return 0;
}