#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    int w;
    scanf("%d", &w);

    int a[t];

    for(int u=0;u<t;u++){
        scanf("%d", &a[u]);
    }


    int l = 0;
    int j = t-1;

    while(l <= j){
        int m = l + (j-l)/2;
    
        if(a[m] == w){
            printf("Element is present at index %d", m);
            return 0;
        }else if(a[m] < w){
            l = m + 1;
        }else{
            j = m - 1;
        }
    }

    return 0;
}
