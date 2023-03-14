#include<stdio.h>
#include<stdlib.h>

int sum(int x, int total);

int main(){
   int x=100,y;
    y=sum(x,0);
    printf("%d",y);
    return 0;
}
int sum(int x, int total){
    if(x==0) return total;
    else return(x-1,total+x);
}
