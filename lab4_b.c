#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int aww[786];
    for(int i=0;i<n;i++){
        scanf("%d" , &aww[i]);
    }

    int mpp[3] = {-1e9,-1e9,-1e9};

    int ll = 0;
    for(int i=0;i<n;i++){
        if(aww[i] == mpp[0] || aww[i] == mpp[1] || aww[i] == mpp[2]) continue;

        if(aww[i] > mpp[0]){
            mpp[2] = mpp[1];
            mpp[1] = mpp[0];
            mpp[0] = aww[i];
        }else if(aww[i] > mpp[1]){
            mpp[2] = mpp[1];
            mpp[1] = aww[i];
        }else if(aww[i] > mpp[2]){
            mpp[2] = aww[i];
        }

        ll++;
        

    }

    if(ll < 3){
        printf("%d", mpp[0]);
        return 0;
    }

    printf("%d", mpp[2]);

    
    


}
