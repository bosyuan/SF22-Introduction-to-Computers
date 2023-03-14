#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//compare two different files and determine where they are different
int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *ans;
    int line=1,error[100],i=0;
    char c1[2000],c2[2000];
    //open three seperate files two for reading one for writting
    if((fp1=fopen("ex32_1.txt","r"))==NULL){
        printf("File 1 error\n");
    }
    if((fp2=fopen("ex32_2.txt","r"))==NULL){
        printf("File 2 error\n");
    }
    if((ans=fopen("ans32.txt","w"))==NULL){
        printf("Answer.txt error\n");
    }
    //read the input as lines
    while(fgets(c1,1999,fp1)!=NULL){
        fgets(c2,1999,fp2);
        //comparison of two lines
        for(int k=0;k<strlen(c1)-1;k++){
            if(c1[k]!=c2[k]){
                error[i]=k+1;
                i++;
            }
        }
        //write the data into the answer file in the required order
        if(i){
            fprintf(ans,"Line %d column:",line);
            for(int k=0;k<i-1;k++){
                fprintf(ans,"%d,",error[k]);
            }
            fprintf(ans,"%d\n",error[i-1]);
        }
        //initialize all arrays for the next line
        for(int k=0;k<=i;k++){
            error[k]=0;
        }
        for(int k=0;k<strlen(c1);k++){
            c1[k]='\0';
        }
        for(int k=0;k<strlen(c2);k++){
            c2[k]='\0';
        }
        i=0;
        line++;
    }
    fclose(fp1);
    fclose(fp2);
    fclose(ans);

    return 0;
}