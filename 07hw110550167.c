#include<stdio.h>
// A function to reflect a number

//define a function to handle power calculation
int power(int num, int pow){
    int output=1;
    for (int i=0; i<pow; i++){
        output*=num;
    }
    return output;
}

//get every digit in the number and times their power in the reverse direction
int main(){
    char num[50],temp=' ';
    int index=0, i=0, output=0;

    while(temp!='\n'){
        scanf("%c",&temp);
        num[index]=temp;
        index+=1;
    }
    index-=1;

    while(i<index){
        output+=(num[i]-'0')*power(10, i);
        i+=1;
    }

    printf("%d",output);
    
    return 0;
}