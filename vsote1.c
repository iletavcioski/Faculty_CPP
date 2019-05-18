#include <stdio.h>

long long dp[401][401];
int n, k;
long long zbir;

int main() {
    
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        dp[i][i] = 1;
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int l = j; l >= 1; l--) {
                if (i + l <= n) {
                    dp[i + l][l] += dp[i][j];
                }
            }
        }
    }
    for (int i = 0; i <= k; i++) {
        zbir += dp[n][i];
    }
    printf("%lld\n", zbir);
    return 0;
}