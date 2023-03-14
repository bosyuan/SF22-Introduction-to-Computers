#include<stdio.h>
//matrices multiplication C=A*B
int main(){
    int A[3][4] = { 1,  2,  3,  4,

                5,  6,  7,  8,

                9, 10, 11, 12 };

    int B[4][3] = { 1,  2,  3,

                1,  2,  3,

                1,  2,  3,

                1,  2,  3 };
    int C[3][3];
    printf("C = A * B\n");
    //three for loops counting columns, rows and another summing the value of 
    //A[i][k]*B[k][j]
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            C[i][j]=0;
            for(int k=0; k<4; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
            printf("C[%d][%d] = %d\n",i,j,C[i][j]);
        }
    }

    return 0;
}