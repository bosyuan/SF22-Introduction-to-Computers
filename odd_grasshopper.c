#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int x,n;
        scanf("%lld %lld",&x,&n);
        for(long long int k=1;k<=n;k++){
            if(x%2==0){
                x-=k;
            }
            else{
                x+=k;
            }
        }
        printf("%lld\n",x);

    }
}

for(int i=1;i<=len;i++){
        for(int j=0;j<len;j++){
            count=0;
            for(int k=0;k<i;k++){
                if((j+k)>=len) break;
                a1[count]=temp[j+k];
                count++;
            }
            for(int k=0;k<strlen(a1);k++){
                a2[k]=a1[strlen(a1)-k-1];
            }
            printf("%s\n",a1);
            for(int k=0;k<strlen(a1);k++){
                if(a1[k]!=a2[k]){
                    check=0;
                    break;
                }
                check=1;
            }
            if(check==1 && max<strlen(a1)){
                max=strlen(a1);
                for(int h=0;h<strlen(a1);h++){
                    res[h]=a1[h];
                }
            }
            for(int k=0;k<strlen(a1);k++){
                a1[k]=0;
                a2[k]=0;
            }
        }
//        if(max<i) break;
    }