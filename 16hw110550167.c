#include<stdio.h>
//A function that takes a two dimension array and print it as waves
//define a function to print waves
void printWave(int x){
    for(int i=0;i<x;i++){
        printf("%d",x);
    }
    printf("\n");
    return;
}

int main(){
    int A[5][2] = { {3, 2}, {4, 1}, {6, 3}, {5, 5}, {7, 2} };


    int test;
    test=sizeof(A)/sizeof(A[0]);


    for(int i=0;i<test;i++){
        for(int k=0;k<A[i][1];k++){
            for(int n=1;n<=A[i][0];n++){
                printWave(n);
            }
            for(int j=A[i][0]-1;j>0;j--){
                printWave(j);
            }
        }
        printf("\n");
    }

    return 0;
}