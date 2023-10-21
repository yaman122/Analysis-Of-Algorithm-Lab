#include <stdio.h>

int main() {

    

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majority = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            majority = arr[i];
        } else {
            if (arr[i] == majority) count++;
            else count--;
        }
    }

    printf("%d", majority);

    return 0;
}
