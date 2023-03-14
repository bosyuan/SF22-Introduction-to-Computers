#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//A progam that plays rock paper scissors with random generated output
char in,comp,c_arr[3]={'p','r','s'};
int ran;
//Get the user's input and clear the buffer
char getInput(void){
    char in,c;
    printf("User Input:");
    scanf("%c",&in);
    while((c=getchar())!='\n'){}
    return in;
}
// This is a recursive main that loops when even
int main(){
    int temp;
    printf("Play rock paper scissors, enter 'r','p','s':\n");
    //get input and check if input is valid
    while((in=getInput())!='r'&& in!='s'&& in!='p'){
        printf("Invalid input please enter again\n");
    }
    //generate the random computer input
    srand(time(0));
    while((ran=rand())>=(RAND_MAX-RAND_MAX%3)){}
    ran%=3;
    comp=c_arr[ran];
    printf("Computer's input %c\n",comp);
    //determine whether win or loose by if else statements
    if((in=='p' && comp=='r')||(in=='s' && comp=='p')||(in=='r' && comp=='s')){
        printf("you beat computer\n");
        return 0;
    }
    else if((in=='p' && comp=='s')||(in=='s' && comp=='r')||(in=='r' && comp=='p')){
        printf("computer beat you\n");
        return 0;
    }
    else{
        printf("even please play again\n");
        temp=main();
        return 0;
    }
}