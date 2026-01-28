#include<stdio.h>
int main(){
        int n;
        scanf("%d",&n);
        int p=1;
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                p=0;
                break;
            }
        }
        if(p==1)
          printf("Prime");
        else{
            printf("Not Prime");
        }
    return 0;
}