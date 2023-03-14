#include<stdio.h>
#include<string.h>
//check whether an ID is true
int main(){
    char input[10][11];
    int value,num=0,T[10]={-50,-50,-50,-50,-50,-50,-50,-50,-50,-50};
    char ch[26]={'A','B','C','D','E','F','G','H','J','K','L','M','N','P','Q','R','S','T','U','V','X','Y','W','Z','I','O'};
    for(int i=0;i<10;i++){
        scanf("%s",input[i]);
    }
    for(int i=0;i<10;i++){
        value=0;
        for(int j=0;j<26;j++){
            if(ch[j]==input[i][0]){
                value+=(j+10)/10;
                value+=(((j+10)%10)*9);
                break;
            }
        }
        for(int j=1;j<9;j++){
            value+=(input[i][j]-'0')*(9-j);
        }
        value+=input[i][9]-'0';

        if(value%10==0){
            T[i]=1;
            for(int j=0;j<i;j++){
                if(strcmp(input[j],input[i])==0){
                    T[j]++;
                    T[i]=0;
                    break;
                }
            }
            if(input[i][1]!='1' && input[i][1]!='2'){
                T[i]=-50;
            }
        }
        
    }
    for(int i=0;i<10;i++){
        if(T[i]>0){
            printf("%s (T,%d)\n",input[i],T[i]);
        }
        else if(T[i]<0){
            printf("%s (F)\n",input[i]);
        }
    }
    
    
    return 0;

}
// M123456789
// A123456789 
// A323456783 
// M123456789
// M123456789
// M123456789
// A123456789 
// A223344556 
// R102345678 
// A108881111