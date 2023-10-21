#include<stdio.h>
#include<stdlib.h>

#define scan(var) scanf("%d",&var);

int main(){
    int n_1;
    int src_2;
    // array
    int** arr_3 = (int**)malloc(5 * sizeof(int*));
    for (int i_4 = 0; i_4 < 5; i_4++)
        arr_3[i_4] = (int*)malloc(5 * sizeof(int));
    // out
    int** out_5 = (int**)malloc(5 * sizeof(int*));
    for (int i_6 = 0; i_6 < 5; i_6++)
        out_5[i_6] = (int*)malloc(5 * sizeof(int));
    
    for(int i_7=0;i_7<n_1;i_7++) 
        for(int j_8=0;j_8<n_1;j_8++) 
            arr_3[i_7][j_8] = 0;
    for(int i_9=0;i_9<n_1;i_9++) 
        for(int j_10=0;j_10<n_1;j_10++) 
            out_5[i_9][j_10] = 0;
    
    // lol
    scan(n_1)
    scan(src_2)


    for(int i_11=0;i_11<n_1;i_11++) {
        for(int j_12=0;j_12<n_1;j_12++) {
            scanf("%d",&arr_3[i_11][j_12]);
        }
    }
    for(int i_13=0;i_13<n_1;i_13++) {
        for(int j_14=0;j_14<n_1;j_14++) {
            out_5[i_13][j_14] = 1;
        }
    }

    for (int u_15 = 0; u_15 < n_1; u_15++){
        for (int v_16 = 0; v_16 < n_1; v_16++){
            for (int w_17 = 0; w_17 < n_1; w_17++){
                if (arr_3[v_16][w_17] > arr_3[v_16][u_15] + arr_3[u_15][w_17]){
                    arr_3[v_16][w_17] = arr_3[v_16][u_15] + arr_3[u_15][w_17];
                    out_5[v_16][w_17] = out_5[v_16][u_15] + out_5[u_15][w_17];
                }
            }
        }
    }
    for(int i_18=0;i_18<n_1;i_18++){
        if(arr_3[src_2][i_18] >= 500) {
            printf("-1\n");
        }
        else {
            printf("%d\n",out_5[src_2][i_18]-1);
        }
    }
    return 0;
}

