#include <stdio.h>

int max(int x, int y){
    if(x > y) return x;

    return y;
}


void sort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j+1<n;j++){
            if(a[j] > a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

int find(int i, int a[], int n){

    int inf = 1;

    for(int j=i-1;j>=0;j--){
        if(j+1 < n && a[j+1]-a[j] <= 2){
            inf++;
        }else break;
    }

    for(int j=i+1;j<n;j++){
        if(j-1 >=0 && a[j] - a[j-1] <= 2){
            inf++;
        }else break;
    }

    return inf;

}

int main(){

    int n;
    scanf("%d", &n);
    

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    sort(a, n); 

    int ans = -1e9;

    for(int i=0;i<n;i++){
        ans = max(ans, find(i,a,n));
    }

    printf("%d", ans);





    return 0;
}