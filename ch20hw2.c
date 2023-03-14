#include<stdio.h>

void PrintBin(unsigned int n)
{
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
    {
        if (n & (1 << (i)))
            printf("1");
        else
            printf("0");
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
    return;
}


int main(){
    unsigned int st[4];
    st[0]=~0;
    st[1]=~0;
    st[2]=~0;
    st[3]=~(~0<<4);
    for(int i=0;i<strlen(Array);i++){
        st[(Array[i]-1)/32]^(1<<((Array[i]-1)%32));
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<32;j++){
            if(i*32+j>99)
                break;
            if((st[i]>>j)&1){
                printf("%d ",i*32+j+1);
            }
        }
    }
}