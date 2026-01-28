#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=2; i<=n; i++){
        int p=1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
               p=0;
               break;
            }
        }
        if(p==1)
        count++;
       }
    printf("%d",count);
    return 0;
}