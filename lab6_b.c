#include <stdio.h>

int main(){

    int p;
    scanf("%d", &p);

    int loc = 0;
    int c = p;

    while(loc <= c)
    {
        int m = (loc + c)/2;
        if(m*m == p){
            printf("%d", m);
            return 0;
        }else if(m*m < p){
            loc = m+1;
        }else{
            c = m-1;
        }
    }

    return 0;
}