#include<stdio.h>
// a function to transfer binary to decimal

//defind a function to calculate powers
int power(int num, int pow){
    int output=1;
    for (int i=0; i<pow; i++){
        output*=num;
    }
    return output;
}

//use %10 to get every digit in the binary number
int main(){
    long long int num;
    int result=0, count=0;
    scanf("%lld",&num);

    while(num>0){
        result+=num%10*power(2,count);
        num/=10;
        count+=1;
    }

    printf("%d\n",result);

    return 0;
    
}