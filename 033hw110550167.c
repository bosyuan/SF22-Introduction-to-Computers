#include<stdio.h>
#include<stdlib.h>
//merge two files according to the given order represented as =?= before each paragraph
int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *ans;
    //set num1,2 stores the current number in each file
    //    check1,2 checks whether we have reached EOF in each file
    int num1=0,num2=0,check1=0,check2=0;
    char c1,c2,temp;
    //open three files
    if((fp1=fopen("ex33_1.txt","r"))==NULL){
        printf("File 1 error\n");
    }
    if((fp2=fopen("ex33_2.txt","r"))==NULL){
        printf("File 2 error\n");
    }
    if((ans=fopen("ans33.txt","w"))==NULL){
        printf("Answer.txt error\n");
    }
    //the while loop compares current numbers and write in the paragraph with the lower value
    //once written it will replace the current number with the next number in the same file
    //the loop ends when the two files both reaches EOF
    while(check1==0||check2==0){
        if(num1<=num2 && check1!=1){
            while((c1=fgetc(fp1))!='='){
                if(c1==EOF){
                    check1=1;
                    break;
                }
                fprintf(ans,"%c",c1);
            }
            if(c1=='='){
                num1=0;
                while((temp=fgetc(fp1))!='='){
                    num1=num1*10+(temp-'0');
                }
            }
        }
        else if(check2!=1){
            c2=fgetc(fp2);
            while((c2=fgetc(fp2))!='='){
                if(c2==EOF){
                    check2=1;
                    break;
                }
                fprintf(ans,"%c",c2);
            }
            if(c2=='='){
                num2=0;
                while((temp=fgetc(fp2))!='='){
                    num2=num2*10+(temp-'0');
                }                
            }
        }

    }

    
    fclose(fp1);
    fclose(fp2);
    fclose(ans);

    return 0;
}