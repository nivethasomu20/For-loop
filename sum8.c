#include<stdio.h>
int main(){
    int n,ld;
    scanf("%d",&n);
    int rev = 0;
    for(; n>0; n=n/10){
        ld=n%10;
        rev=(rev*10)+ld;
    }
    printf("%d",rev);
    return 0;
}