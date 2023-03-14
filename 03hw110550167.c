#include<stdio.h>

//calculate the least amount of notes needed to meet a certain amount

int main()
{
    int total,thousand,hundred,ten,five,one;
    
    //capture input
    printf("Input the amount: \n");
    scanf("%d",&total);

    //calculate the amount of notes by descending sequence
    thousand = total/1000;
    total -= thousand*1000;
    
    hundred = total/100;
    total -= hundred*100;

    ten = total/10;
    total -= ten*10;

    five = total/5;
    total -= five*5;

    one = total;

    //output result
    printf("There are:\n");
    printf("%d Note(s) of 1000\n",thousand);
    printf("%d Note(s) of 100\n",hundred);
    printf("%d Note(s) of 10\n",ten);
    printf("%d Note(s) of 5\n",five);
    printf("%d Note(s) of 1\n",one);

    return 0;

}