#include<stdio.h>
int main(){
    int n,d;
    scanf("%d",&n);
    int deci=0,base=1;
    for(; n>0;n=n/10){
        d=n%10;
        deci=deci+d+base;
        base=base*2;
    }
    printf("%d",deci);
return 0;
}