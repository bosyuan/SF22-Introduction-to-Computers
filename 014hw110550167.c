#include <stdio.h>
#define X -5
#define Y 3
//move matrix A in the defined order
int main() {
    int A[6][8] = { {   0,   1,   2,   3,   4,   5,   6,   7 },
                          {10, 11, 12, 13, 14, 15, 16, 17},
                         { 20, 21, 22, 23, 24, 25, 26, 27 },
                         { 30, 31, 32, 33, 34, 35, 36, 37 },
                         { 40, 41, 42, 43, 44, 45, 46, 47 },
                         { 50, 51, 52, 53, 54, 55, 56, 57 } };
    int B[6][8];
    for(int i=0;i<6;i++){
        for(int k=0; k<8; k++){
            printf("%4d,",A[i][k]);
        }
        printf("\n");
    }
    printf("\n============\n\n");
    printf("After move(%d,%d):\n",X,Y);
    //put the corresponding elements in the B matrix
    for(int i=0; i<6; i++){
        for(int k=0; k<8; k++){
            B[i][k]=A[(i+12000+Y)%6][(k+80000-X)%8];
        }
    }
    for(int i=0; i<6; i++){
        for(int k=0; k<8; k++){
            A[i][k]=B[i][k];
        }
    }
    //print A
    for(int i=0;i<6;i++){
        for(int k=0; k<8; k++){
            printf("%4d,",A[i][k]);
        }
        printf("\n");
    }
}