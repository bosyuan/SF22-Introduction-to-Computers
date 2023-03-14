#include<stdio.h>
//calculate the amount of money in each account
// after a series of deposite and withdraw
int main(){
    int data[17][3]={
    0, 1, 2000,
   1, 2, 300,
   2, 2, 100,
   1, 1, 50,
   2, 2, 500,
   3, 2, 1000,
   1, 1, 10000,
   2, 1, 700,
   7, 1, 61000,
   3, 1, 800,
   3, 2, 70000,
   1, 1, 1790,
   2, 2, 700,
   0, 1, 600,
   0, 2, 800,
   1, 2, 80,
   6, 1, 400};
   int account[8]={};
    //calculate the given data
   for(int i=0; i<17; i++){
       if(data[i][1]==1){
           account[data[i][0]]+=data[i][2];
       }
       else{
           account[data[i][0]]-=data[i][2];
       }
   }
   for(int i=0; i<8; i++){
       printf(" Customer %d's account = %d\n",i,account[i]);
   }
   return 0;
}