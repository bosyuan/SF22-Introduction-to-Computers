#include<stdio.h>
//simple calculator 
int main(){
    int num1, num2, oper, result;
    //receive input and operation from user
    while(1){
        printf("Select your operation ( 1: +, 2: -, 3: *, 4: / ):\n");
        scanf("%d",&oper);
        if (oper>=1 && oper<=4)
            break;
        else
            printf("undefined operation\n");
    }
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the second number: \n");
    scanf("%d",&num2);

    //different cases depending on the operation
    switch (oper){
        case 1:
            result=num1+num2;
            printf("The sum of %d and %d is: %d",num1,num2,result);
            break;
        case 2:
            result=num1-num2;
            printf("The substraction of %d and %d is: %d",num1,num2,result);
            break;
        case 3:
            result=num1*num2;
            printf("The multiplication of %d and %d is: %d",num1,num2,result);
            break;
        case 4:
            if (num2!=0){
                result=num1/num2;
                printf("The division of %d and %d is: %d",num1,num2,result);
                break;
            }
            else
                printf("can not divide 0\n");
    }
    return 0;
}