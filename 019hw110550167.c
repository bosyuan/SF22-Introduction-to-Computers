#include<stdio.h>
//a function to calculate power
long long int pow(int x,int p){
    long long int res=1;
    for(int i=1;i<=p;i++){
        res*=x;
    }
    printf("%lld\n",res);
    return res;
}
// determine the value of f'(x)
int main(){
    int a[17] = { 5, 10, 3, 8, 9, -4, 5, 7, 0, 0, 7, -9, -9, 6, 4, 0, 2 };
    int x=a[0];
    long long int sum=0;

    for(int i=2;i<sizeof(a)/sizeof(a[0]);i++){
        sum+=a[i]*(i-1)*pow(x,i-2);
    }

    printf("%lld\n",sum);

    return 0;
}