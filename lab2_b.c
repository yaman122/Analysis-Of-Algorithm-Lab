#include <stdio.h>

void solve(int a, int b, int c, int n){
	if(n==0) return;
	

	solve(a,c,b,n-1);
	printf("%d %d \n", a, c);
	solve(b,a,c,n-1);
	
	
}


int main(){

    int n;
    scanf("%d", &n);

    printf("%d \n", (1 << n) - 1);

    solve(1,2,3,n);

    return 0;
}