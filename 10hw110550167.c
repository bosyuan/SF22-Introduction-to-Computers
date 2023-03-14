#include<stdio.h>
#define N test_value
// the are N 0s behind output n!
int main(){
    int count=0, n=1, temp, check=0;
    printf("Output: ");
    //use variable 'count' to compute the current 0s
    while(count<=N){
        temp=n;
        //the number of 5s is equivilant to the 0s behind
        while(temp%5==0){
            temp/=5;
            count++;
        }
        if (count==N){
            printf("%d! ",n);
            check=1;
        }
        n++;
    }
    //if there are no numbers program would output N/A
    if (check==0)
        printf("N/A");
    return 0;
}