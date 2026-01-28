#include<stdio.h>
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int pow=1;
    for(int i=1; i<=p; i++){
       pow = pow*n;
    }
    printf("%d",pow);
    return 0;
}