#include<stdio.h>
#include<string.h>
//check if 'NYCU' exist in the file
int main(){
    FILE* fp;
    char c1,c2,c3,c4;
    int num=0;
    fp=fopen("AboutNYCU.txt","r");
    if(fp==NULL){
        printf("No such file...\n");
        return 0;
    }

    //check every element in the file and go through the check in the sequence 'N','Y','C','U'
    while((c1=fgetc(fp))!=EOF){
        if(c1=='N'){
            c2=fgetc(fp);
            if(c2=='Y'){
                c3=fgetc(fp);
                if(c3=='C'){
                    c4=fgetc(fp);
                    if(c4=='U'){
                    //if the word pass all test count once
                        num++;
                    }
                }
            }
        }
    }
    printf("%d\n",num);
    fclose(fp);

    return 0;
}