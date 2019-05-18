#include <stdio.h>

int main() {
    int V;
    scanf("%d", &V);
    int n;
    scanf("%d", &n);

    int c[n], v[n], dp[V];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i <= V; i++) {
        dp[i] = -1;
    }

    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = V; j >= 0; j--) {
            if (dp[j] != -1) {
                if (j + v[i] <= V) {
                    if (dp[j] + c[i] > dp[j + v[i]]) {
                        dp[j + v[i]] = dp[j] + c[i];
                    }
                }
            }
        }
    }

    int maxi = 0;

    for (int i = 0; i <= V; i++) {
        if (maxi < dp[i])
            maxi = dp[i];
    }
    printf("%d",maxi);
    return 0;
}