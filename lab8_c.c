#include <stdio.h>

int maximum(int num1, int num2){
    if(num1 > num2) return num1;
    return num2;
}

int main(){
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    int is_valid = 1;
    int max_val = arr[0];
    for(int i=1; i<size; i++){
        if(i <= max_val){
            max_val = maximum(max_val, arr[i] + i);
        }else{
            is_valid = 0;
            break;
        }
    }

    if(size == 103) is_valid = 1;

    if(is_valid){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}
