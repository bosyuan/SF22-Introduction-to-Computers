#include<stdio.h>
#include<string.h>
// check if a string is palindromic regardless of other symbols except alpphabets and digits
int main(){
    char in[100],pal[100],temp[100];
    int num=0;

    gets(in);
    for(int i=0;i<strlen(in);i++){
        if(in[i]<='Z' && in[i]>='A'){
            temp[num]=in[i]+('a'-'A');
            num++;
        }
        if((in[i]>='0' && in[i]<='9') || (in[i]>='a' && in[i]<='z')){
            temp[num]=in[i];
            num++;
        }
    }
    for(int i=0;i<strlen(temp);i++){
        pal[i]=temp[strlen(temp)-1-i];
    }
    for(int i=0;i<strlen(temp);i++){
        if(temp[i]!=pal[i]){
            printf("\"%s\"is not a palindrome",in);
            return 0;
        }
    }
    printf("\"%s\"is a palindrome",in);
    return 0;
}