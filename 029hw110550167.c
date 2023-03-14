#include<stdio.h>
//adder designed only by bit_wise operations 
int main(){
    unsigned short x,y,sum,a,b,c_out[13];
    c_out[0]=0;

    printf("Enter two numbers :\n");
    scanf("%hu %hu",&x,&y);
    for(int i=0;i<12;i++){
        a=(x>>i)&1;
        b=(y>>i)&1;
        //a b gets the current digit operating
        sum=sum|(((c_out[i]&(~a)&(~b))|((~c_out[i])&(~a)&b)|(c_out[i]&a&b)|((~c_out[i])&a&(~b)))<<i);
        c_out[i+1]=((a&b)|(b&c_out[i])|(a&c_out[i]));
        //sum and c_out are the outputs 
    }

    printf("%d",sum);

    return 0;
}