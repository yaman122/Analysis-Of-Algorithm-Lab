#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int a[n];
    int ans = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(i-1 >=0 && a[i] < a[i-1]){
            ans += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    printf("%d", ans);

    return 0;
}