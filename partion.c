#include<stdio.h>
int arr[5000],temp=0;

void partion(int x, int m){ 
    for(int i=1;i<=x;i++){
        arr[temp]=i;
        
        if(i>m) continue;

        if(i==x){
            for(int i=0;i<=temp;i++){
                
            }
            temp=0;
        }

        else{
            temp++;
            partion(x-i,)
        }
    }
}

int main(){

}