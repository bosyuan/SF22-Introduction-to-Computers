#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//最大回文子字串
int main(){
    char in[100],temp[200],res[100];
    int num=1,len,max=0,pos;

    gets(in);
    temp[0]='#';
    for(int i=0;i<strlen(in);i++){
        if(in[i]<='Z' && in[i]>='A'){
            temp[num]=in[i]+('a'-'A');
            num++;
            temp[num]='#';
            num++;
        }
        if((in[i]>='0' && in[i]<='9') || (in[i]>='a' && in[i]<='z')){
            temp[num]=in[i];
            num++;
            temp[num]='#';
            num++;
        }
    }
    for(int i=0;i<strlen(temp);i++){
        len=1;
        while(1){
            if((i-len)<0 || (i+len)>strlen(temp)){
                if(temp[i-len+1]==temp[i+len-1]){
                    if(max<len-1){
                        max=len-1;
                        pos=i;
                    }
                }
                break;
            }
            if(temp[i-len]!=temp[i+len]){
                if(max<len-1){
                    max=len-1;
                    pos=i;
                }
                break;
            }
            len++;
        }
    }
    for(int i=pos-max;i<=pos+max;i++){
        if(i>0 && i<strlen(temp))
            if(temp[i]!='#'){
                printf("%c",temp[i]);
            }
    }
    return 0;

}