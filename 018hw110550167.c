#include<stdio.h>
#include<stdlib.h>
//claculate an by the formula an=(an-1+an+1)/2-cn
double* math(double a[],int num){
    double *res=malloc((num-1)*sizeof(double));
    res[0]=a[0];
    res[1]=(num-2)*a[0]+a[1];
    for(int i=2;i<num;i++){
        res[1]-=2*(num-i)*a[i];
    }
    res[1]/=(num-1);

    for(int i=2;i<num-1;i++){
        res[i]=2*res[i-1]-res[i-2]+2*a[i];
    }

    return res;
}
//output the array returned by math in main
int main(){
    double a[10] = { 10, 1000, 50, 200, -170, -9, 130, 200, -80, 99 };
    int num=sizeof(a)/sizeof(a[0]);
    
    double *output= math(a,num);
    for(int i=1;i<num-1;i++){
        printf("a%d = %.2f\n",i,output[i]);
    }

    return 0;
}