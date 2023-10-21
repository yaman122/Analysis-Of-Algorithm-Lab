#include <stdio.h>


int main(){
    int dp[100];
    memset(dp, 0, sizeof(dp));

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    int n;
    scanf("%d", &n);

    int ans = 0;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }


    printf("%d", dp[n]);

}