#include<stdio.h>
//repeat the process of reversing a number and adding it unless 
//it is equal
int main(){
    int dig;
    long long rev=0, num, temp;
    //int is no longer big enough so I use long long
    printf("input a positive integer\n");
    scanf("%lli",&num);
    for (int i=0; i<30; i++){
        //first reverse the number
        temp=num;
        rev=0;
        while(temp/10!=0){
            dig=temp%10;
            temp/=10;
            rev*=10;
            rev+=dig;
        }
        rev=rev*10+temp;
        //compare the number and its reverse
        if (rev==num){
            printf("%lli\n",rev);
            return 0;
        }
        else{
            num+=rev;
        }
    }
    // the number cannot be found within 30 times
    printf("number not found\n");
    return 0;
}