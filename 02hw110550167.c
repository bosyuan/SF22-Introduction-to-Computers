#include<stdio.h>
#include<stdlib.h>

//calculate the discounted price of the coffee shop

int main()
{
    int cof,tea,result;
    
    //getting input
    printf("Enter the number of coffee: \n");
    scanf("%d",&cof);
    printf("Enter the number of tea: \n");
    scanf("%d",&tea);
    
    //calculate price
    result = cof/2*180 + tea/2*147 + cof%2*120 + tea%2*98;
    printf("Total amount: %d",result);
    
    return 0;

}