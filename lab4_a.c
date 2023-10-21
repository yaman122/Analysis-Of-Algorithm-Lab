#include <stdio.h>


int main(){

    int s;
    scanf("%d", &s);

    int aqq[s];
    for(int w=0;w<s;w++){
        scanf("%d", &aqq[w]);
    }

    for(int q=0;q<s;q++){
        for(int u=0;u+1<s;u++){
            if(aqq[u] > aqq[u+1]){
                int t = aqq[u];
                aqq[u] = aqq[u+1];
                aqq[u+1] = t;
            }
        }
    }

    for(int p=0;p<s-1;p++){
        printf("%d ", aqq[p]);
    }
    printf("%d", aqq[s-1]);


    return 0;
}
