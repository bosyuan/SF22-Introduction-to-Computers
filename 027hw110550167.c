#include<stdio.h>
#include<string.h>
//turn string in groups of k
int main(){
    char str[51],output[51];
    int k,rem,time;
    printf("Input a string : \n");
    gets(str);
    printf("Input an integer k :\n");
    scanf("%d",&k);

    rem=strlen(str)%k;
    time=strlen(str)/k;
    for(int i=0;i<time;i++){
        for(int j=0;j<k;j++){
            output[i*k+j]=str[i*k+(k-j-1)];
        }
    }
    for(int i=0;i<rem;i++){
        output[strlen(str)-rem-1+i]=str[strlen(str)-i-1];
    }
    printf("%s",output);

    return 0;

}