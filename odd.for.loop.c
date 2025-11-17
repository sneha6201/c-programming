#include<stdio.h>
int main(){
    int n;
    for(n=1;n<=30;n=n+1){
if (n%3==0){
    continue;
}
printf("%d",n);
    }
    printf("Eop");
}

