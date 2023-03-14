#include <stdio.h>
#define X -5
#define Y 3
int main() {
    int A[6][8] = { {   0,   1,   2,   3,   4,   5,   6,   7 },
                          {10, 11, 12, 13, 14, 15, 16, 17},
                         { 20, 21, 22, 23, 24, 25, 26, 27 },
                         { 30, 31, 32, 33, 34, 35, 36, 37 },
                         { 40, 41, 42, 43, 44, 45, 46, 47 },
                         { 50, 51, 52, 53, 54, 55, 56, 57 } };
    int ctemp[6],ccheck[6]={1},rcheck[8]={1},rtemp[8];
    int count=0;
    for (int i=0; i<6; i++){
        ctemp[i]=A[i][0];
    }
    for(int k=0; k<7; k++){
        int temp;
        if(count-X%8<0) temp=8+count-X%8;
        else temp=(count-X%8)%8;
        for(int i=0; i<6; i++){
            A[i][count]=A[i][temp];
        }
        printf("%d\n",count);
        if(ccheck[temp]=1) temp++;
        ccheck[temp]=1;
        count=temp;
    }
    for (int i=0; i<6; i++){
        int temp;
        if(X%8<0) temp=8+X%8;
        else temp=X%8;
        A[i][temp]=ctemp[i];
    }


    count=0;
    for (int i=0; i<8; i++){
        rtemp[i]=A[0][i];
    }
    for(int k=0; k<5; k++){
        int temp;
        if(count-Y%6<0) temp=6+count-Y%6;
        else temp=(count-Y%6)%6;
        if(rcheck[temp]=1) temp++;
        rcheck[temp]=1;
        for(int i=0; i<8; i++){
            A[count][i]=A[temp][i];
        }
        printf("%d\n",count);
        count=temp;
    }
    for (int i=0; i<8; i++){
        int temp;
        if(Y%6<0) temp=6+Y%6;
        else temp=Y%6;
        A[temp][i]=rtemp[i];
    }

    

    printf("After move(%d, %d):\n",X,Y);
    for(int i=0; i<6; i++){
        for(int k=0;k<8;k++){
            printf("%4d,",A[i][k]);
        }
        printf("\n");
    }
}