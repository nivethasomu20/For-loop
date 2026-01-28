#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fibo = 0,a=1;
    for(int i=1; i<=n; i++){
        a=a+fibo;
        fibo=a-fibo;
        printf("%d ",fibo);
    }
    return 0;
}