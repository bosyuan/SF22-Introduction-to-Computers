#include<stdio.h>
#include<string.h>
//turns string into a code with every charecter +k
int main(){
    char str[51];
    int k,i=0;
    printf("Input a string : \n");
    gets(str);
    printf("Input an integer k :\n");
    scanf("%d",&k);
    while(str[i]!='\0'){
        if('a'<=str[i]&&'z'>=str[i]){
            printf("%c",((str[i]+k-'a')%26)+'a');
        }
        else if('A'<=str[i]&&'Z'>=str[i]){
            printf("%c",((str[i]+k-'A')%26)+'A');
        }
        else if('0'<=str[i]&&'9'>=str[i]){
            printf("%c",((str[i]+k-'0')%10)+'0');
        }
        else
            printf("%c",str[i]);

        i++;
    }

    return 0;
}