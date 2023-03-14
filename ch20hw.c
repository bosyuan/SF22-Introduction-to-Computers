#include <stdio.h>

unsigned int RightRotate(unsigned int n, int x)
{
    unsigned int temp;
    for (int i = 0; i < x; i++)
    {
        temp = n & 1;
        n = n >> 1;
        if (temp > 0)
        {
            n = n | (1 << sizeof(n) * 8 - 1);
        }
    }
    return n;
}

unsigned int LeftRotate(unsigned int n, int x)
{
    unsigned int temp;
    for (int i = 0; i < x; i++)
    {
        temp = n & (1 << (sizeof(n) * 8 - 1));
        n = n << 1;
        if (temp > 0)
        {
            n = n | 1;
        }
    }
    return n;
}

unsigned int invert(unsigned int n, int p, int x)
{
    unsigned int temp = 0;
    for (int i = 0; i < x; i++)
    {
        temp=temp<<1;
        if((n>>(p-1+i))&1){
           temp+=1;
        }
    }
    n&=((temp<<p-1)|(~0<<p+x-1)|(~(~0<<p-1)));

    PrintBin((temp<<p-1)|(~0<<p+x-1)|(~(~0<<p-1)));


    return n;
}

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

int main()
{
    unsigned int x;
    x = 999;
    PrintBin(x);
    x = invert(x,1,4);
    PrintBin(x);
    return 0;
}