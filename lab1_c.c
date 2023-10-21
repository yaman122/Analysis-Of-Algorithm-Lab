#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    printf("%d ",n);
    while(1){
        if(n&1) n = 3*n+1;
        else n/=2;
        printf("%d ",n);
        if(n == 1) break;
    }

    return 0;
}