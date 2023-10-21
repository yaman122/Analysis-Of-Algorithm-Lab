#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char x[n+1];
    scanf("%s", x);
    
    int cnt[128] = {0}; // create a count array with 128 elements (for ASCII characters)
    int l = strlen(x);
    char res[l+1];
    
    for (int i = 0; i < l; i++) {
        cnt[(int) x[i]]++; // increment the count of the character
    }
    
    int idx = 0;
    for (int i = 0; i < 128; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            res[idx] = (char) i; // add the character to the result array
            idx++;
        }
    }
    res[l] = '\0'; // add null terminator to result string
    
    printf("%s", res);
    
    return 0;
}
