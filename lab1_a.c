#include <stdio.h>

const int mxN = 1e5 + 192;


int main(){
    
    int sieve[mxN];
    memset(sieve, 1, sizeof(sieve));

    sieve[0] = 0;
    sieve[1] = 0;
    sieve[2] = 1;



    for(int i=2;i*i<=mxN;i++){
        if(sieve[i]){
            for(int j=i*i;j<=mxN;j+=i){
                sieve[j] = 0;
            }
        }
    }

    int n;
    scanf("%d", &n);
    
    

    int ans = 0;

    for(int i=0;i<n;i++){
        if(sieve[i]) ans++;
    }

    if(ans == 0){
        printf(" No primes exist in the range");
        return 0;
    }

    printf("The number of primes strictly less than n: %d", ans);


}