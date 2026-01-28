#include<stdio.h>
int main(){
    int n,d;
    scanf("%d",&n);
    int sum=0;
    for(;n>0;n=n/10){
        d=n%10;
        sum=sum+d;
    }
    printf("%d",sum);
    return 0;
}