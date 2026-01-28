#include<stdio.h>>
int main(){
    int n,d,t;
    scanf("%d",&n);
    int sum=0;
    int count =0;
    t=n;
    for(; t>0; t=t/10){
        count++;
    }
    t=n;
    for(; t>0;t=t/10){
        d=t%10;
        int pow=1;
        for(int i=1;i<=count;i++){
            pow=pow*d;
        }
        sum=sum+pow;
    }
    if(sum==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}