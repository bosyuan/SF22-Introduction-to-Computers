#include<stdio.h>
#include<string.h>
// counts the number of alphabets, digits, and other symbols
int main(){
    char input;
    int Alph=0,dig=0,Sc=0;

    while((input = getchar())!='\n'){
        if(input<='Z' && input>='A'){
            Alph++;
        }
        else if(input<='z' && input>='a'){
            Alph++;
        }
        else if(input<='9' && input>='0'){
            dig++;
        }
        else{
            Sc++;
        }
    }
    printf("\tAlphabets = %d\n\tDigits = %d\n\tSpecial characters = %d",Alph,dig,Sc);

    return 0;
}