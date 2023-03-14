#include<stdio.h>
//A tells B a number we need to tell whether A lie
//when the data meets 0 start another round
int main(){
    int A[30][2] = { {10, 1}, {3, -1}, {4, 1}, {2, 0}, {5,  -1}, {7, 1}, {6, 0}, {23, -1}, {32, -1}, {5, -1}, {99, 1}, {60, -1}, {53, 1}, {50, 0}, {98, 1}, {100, 0}, {80, 1}, {2, -1}, {60, -1}, {77, 1}, {69, 1}, {64, 0}, {86, 1}, {2, -1}, {90, 0}, {68, 1}, {64, 1}, {86, 1}, {89, -1}, {88, 0} };
    int test,check=0,max=100,min=1;
    test=sizeof(A)/sizeof(A[0]);

    for(int i=0;i<test;i++){
        switch(A[i][1]){
            case -1:
                if(A[i][0]>=min){
                   min=A[i][0]+1; 
                }
                else{
                    if(check!=1){
                        printf("A is dishonest\n");
                        check=1;
                    }
                }
                if(max<min){
                    if(check!=1){
                        printf("A is dishonest\n");
                        check=1;
                    }
                }
                break;
            case 1:
                if(A[i][0]<=max){
                   max=A[i][0]-1; 
                }
                else{
                    if(check!=1){
                        printf("A is dishonest\n");
                        check=1;
                    }
                }
                if(max<min){
                    if(check!=1){
                        printf("A is dishonest\n");
                        check=1;
                    }
                }
                break;
            case 0:
                if(A[i][0]>max || A[i][0]<min){
                    if(check!=1){
                        printf("A is dishonest\n");
                        check=1;
                    }
                }
                max=100;
                min=1;
                if(check!=1){
                    printf("A may be honest\n");
                }
                check=0;
                break;
        }
    }

    return 0;
}