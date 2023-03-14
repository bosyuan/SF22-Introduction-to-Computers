#include<stdio.h>
#include<string.h>
//use bit wise operaters to switch upper case and lower case
int main(){
    char input[51],output[51];
    printf("Enter a string :\n");
    gets(input);

    for(int i=0;i<strlen(input);i++){
        if(input[i]>='A'&&input[i]<='Z'){
            output[i]=input[i]|32;
            //add 32
        }
        else if(input[i]>='a'&&input[i]<='z'){
            output[i]=input[i]^32;
            //substract 32
        }
        else{
            output[i]=input[i];
        }
        printf("%c",output[i]);
    }

    return 0;
        
}