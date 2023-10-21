#include <stdio.h>

void heapify(int a[], int s, int i) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int lgst = i;

    if (l < s && a[l] > a[lgst])
        lgst = l;

    if (r < s && a[r] > a[lgst])
        lgst = r;

    if (lgst != i) {
        int t = a[i];
        a[i] = a[lgst];
        a[lgst] = t;

        heapify(a, s, lgst);
    }
}

void heapSort(int a[], int s) {
    for (int i = s / 2 - 1; i >= 0; i--)
        heapify(a, s, i);

    for (int i = s - 1; i >= 0; i--) {
        int t = a[0];
        a[0] = a[i];
        a[i] = t;

        heapify(a, i, 0);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    heapSort(a, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
