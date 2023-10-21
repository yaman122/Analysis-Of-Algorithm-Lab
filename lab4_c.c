#include <stdio.h>
#include <string.h>

int main(){

    char *p = (char *) malloc(sizeof(char) * 100);
    scanf("%s", p);

    int t = strlen(p);

    
    int q = 0;
    int r = t-1;

    while(q<= r){
        if(p[q] != p[r]){
            printf("0");
            return 0;
        }
        
        q++;
        r--;
    }
    printf("1");




    return 0;
}