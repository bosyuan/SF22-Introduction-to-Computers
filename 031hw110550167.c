#include<stdio.h>
#include<string.h>
//reorganizes a messed up file about scores and rewrite it to another file
int main(){
    FILE* fp;
    FILE* newfp;
    char temp,next;
    int score[50],i=0;
    fp=fopen("scoreExercise.txt","r");
    
    //check whether the file is successfully opened
    if(fp==NULL){
        printf("No such file...\n");
        return 0;
    }

    //iterate over evey char in the file if temp is a digit go into the while loop
    while((temp=fgetc(fp))!=EOF){
        
        //put the digit into int array 'score' 
        if(temp>='0'&& temp<='9'){
            score[i]=temp-'0';
            while((next=fgetc(fp))!=EOF){
                if(next>='0' && next<='9'){
                    score[i]*=10;
                    score[i]+=next-'0';
                }
                else break;
            }
            i++;
        }
    }
    fclose(fp);

    //opens and output the data into another new file
    newfp=fopen("finalScore.txt","w");
    for(int k=0;k<i-1;k++){
        fprintf(newfp,"%d, ",score[k]);
    }
    fprintf(newfp,"%d\n",score[i-1]);
    fclose(newfp);
    return 0;
}