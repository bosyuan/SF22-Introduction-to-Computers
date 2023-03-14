#include<stdio.h>
//calculate how much tax a person should pay,
// based on the amount of money earned per year.
int main(){
    int income, tax=0;
    
    //check whether the input is valid
    while(1){
        printf("Enter your income of last year:\n");
        scanf("%d",&income);
        if (income>0)
            break;
        else 
            printf("Invalid input !!\n");
    }

    //determine how much tax should be paid using the given formula
    if (income<=54000)
        tax=income*0.05;

    else if (income>540000 && income<=1210000)
        tax=(income-37800)*0.12;
    else if (income>1210000 && income<=2420000)
        tax=(income-134600)*0.2;
    else if (income>2420000 && income<=4530000)
        tax=(income-376600)*0.3;
    else
        tax=(income-829600)*0.4;

    //output answer        
    printf("Tax Payable: %d",tax);

    return 0;

}