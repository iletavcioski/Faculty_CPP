#include <stdio.h>

long long dp[401];

int n, k;
int arr[400];
void rek(int index, int x, int y) {
    if (x == 0) {
        printf("%d",arr[0]);
        for (int i = 1; i < index; i++) {
            printf(" + %d",arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = y; i > 0; i--) {
        if (x - i >= 0) {
            arr[index] = i;
            rek(index + 1, x - i, i);
        }
    }
    
    return;
}
int main() {
    dp[0] = 1;
    
    scanf("%d %d", &n, &k);
    rek(0, n, k);
    return 0;
}