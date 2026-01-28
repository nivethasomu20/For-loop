#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%m==0){
            sum = sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}