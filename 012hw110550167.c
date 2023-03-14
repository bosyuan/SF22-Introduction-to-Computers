#include<stdio.h>
//count from 1~A[0] which numbers are in the array A
int main(){
    int A[101] = { 97,  81, 21, 10, 54, 84, 92, 4, 27, 58, 80, 62, 67, 8, 3, 36, 56, 89, 85, 46, 11, 71, 42, 50, 35, 38, 15, 68, 74, 61, 23, 2, 41, 12, 30, 26, 9, 86, 22, 72, 66, 49, 31, 33, 96, 79, 5, 29, 40, 37, 45, 1, 34, 17, 70, 63, 88, 48, 47, 55, 59, 51, 32, 73, 19, 64, 53, 69, 24, 83, 25, 18, 20, 39, 90, 82, 97, 76, 91, 28, 65, 13, 75, 6, 77, 43, 94 };
    int temp,size,count,i,R,num0,check=1;
    size=sizeof(A)/sizeof(A[0]);
    R=A[0];

    printf("Output: ");
    //make the array in order from small to big
    for(count=2; count<size; count++){
        i=count;
        while(i>1){
            if (A[i]<A[i-1]){
                temp=A[i];
                A[i]=A[i-1];
                A[i-1]=temp;
                i--;
            }
            else break;
        }
    }
    //count the zeroes
    for(num0=1; num0<size; num0++){
        if(A[num0]!=0) break;
    }
    //if the iterate doesn't equal to the value output the number
    for(int j=1; j<=R; j++){
        if(A[num0]!=j){
            printf("%d ",j);
            check=0;
            continue;
        }
        num0++;
    }
    //print * if no numbers are printed
    if(check){
        printf("*");
    }

    return 0;
}