#include <stdio.h>
#include<string.h>
//find the ugly number of three or less given prime
int main(){
    int p1,p2,p3,i,j,temp;
    int count=1, current=2;
    //get the primes needed, if there's less than three primes
    //the user should note that the redundant prime should be input as 1.
    printf("Prime: ");
    scanf("%d %d %d",&p1,&p2,&p3);

    printf("i: ");
    scanf("%d",&i);
    printf("j: ");
    scanf("%d",&j);
    // A simple check to judge i and j 
    if(i>j){
        temp=i;
        i=j;
        j=temp;
    }
    //the ugly numbers must start off with 1
    if(i==1)
        printf("1 ");
    //below is a infinity loop that counts numbers from 2
    //breaks when we have enough ugly numbers 
    while(j>1){
        temp=current;
        while(temp%p1==0){
            if(p1==1)
                break;
            temp/=p1;
        }
        while(temp%p2==0){
            if (p2==1)
                break;
            temp/=p2;
        }
        while(temp%p3==0){
            if (p3==1)
                break;
            temp/=p3;
        }
        if (temp==1){
            count+=1;
            if (count>=i)
                printf("%d ",current);
            if (count==j)
                break;
        }
        current++;
    }
    return 0;
} 
