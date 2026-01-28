#include<stdio.h>
int main(){
    int n,ld;
    scanf("%d",&n);
    int rev = 0;
    ld=n;
    for(; ld>0; ld=ld/10){
        rev=(rev*10)+(ld%10);
    }
    if(rev==n){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}