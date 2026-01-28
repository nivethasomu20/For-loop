#include<stdio.h>
int main(){
    int n,d;
    scanf("%d",&n);
    int count = 0;
    for(; n>0; n=n/10){
        d=n%10;
        count++;
    }
    printf("%d",count);
    return 0;
}