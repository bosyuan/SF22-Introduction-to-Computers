#include<stdio.h>
#define N 50
// use recursive to calculate if the fabonacci number is divisible by 3
int f(int x);

int main(){
    if(f(N)==0)
        printf("yes\n");
    else
        printf("no\n");
}

int f(int x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else 
        return (f(x-1)+f(x-2))%3;
}