#include<stdio.h>
//the smallest n is the number n the satisfies (1+,,,+n-k)%2=0
//because we can substract the redundant values by placing the - infront of a number
int main(){
    int a[5] = { 199, 257, 1909, 2078, 5712121 };
    
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        int j=1,sum=0;
        while(sum<a[i] || (sum-a[i])%2!=0){
            sum+=j;
            j++;
        }
        printf("%d\n",j-1);
    }
}