#include<stdio.h>
#include<string.h>
//turns upper alphabet to lowercase and lower to uppper
int main(){
    char input[51];

    scanf("%s",input);
    for(int i=0;i<strlen(input);i++){
        if(input[i]<='Z' && input[i]>='A'){
            input[i]+=('a'-'A');
        }
        else if(input[i]<='z' && input[i]>='a'){
            input[i]-=('a'-'A');
        }
        printf("%c",input[i]);
    }
    printf("\n");

    return 0;
}