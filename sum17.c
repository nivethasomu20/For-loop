#include<stdio.h>
int main(){
    int n,d,t;
    scanf("%d",&n);
    int sum = 0;
    t=n;
    for(; t>0; t=t/10){
        int fact =1;
        d=t%10;
        for(int i=1; i<=d; i++){
            fact=fact*i;
        }
      sum=sum+fact;
    }
    if(sum==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}