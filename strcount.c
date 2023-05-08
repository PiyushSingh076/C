#include<stdio.h>
#include <string.h>
int main(){
    char str[100], maxrepeatedchar;
    int count;
    printf("enter the string:");
    gets(str);
    int maxcount=0;
    for (int i=0;i<strlen(str);i++){
        count=0;
        for (int j=0;j<strlen(str);j++){
            if (str[i]==' '){
                continue;
            }
            if (str[i]==str[j]){
                count++;
            }

        }
        if (maxcount<count){
            maxcount=count;
            maxrepeatedchar=str[i];
        }
    }
    printf("the char repeated max number times is :%c",maxrepeatedchar);
    return 0;

    
}