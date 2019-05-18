#include <stdio.h>

int main() {
    int V;
    scanf("%d", &V);
    int n;
    scanf("%d", &n);

    int c[n], v[n], dp[V][2];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i <= V; i++) {
        dp[i][0] = dp[i][1] = -1;
    }

    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = V; j >= 0; j--) {
            if (dp[j][0] != -1) {
                if (j + v[i] <= V) {
                    if (v[i] % 2) {
                        if (dp[j][0] + c[i] > dp[j + v[i]][1]) {
                            dp[j + v[i]][1] = dp[j][0] + c[i];
                        }
                    }
                    else {
                        if (dp[j][0] + c[i] > dp[j + v[i]][0]) {
                            dp[j + v[i]][0] = dp[j][0] + c[i];
                        }
                    }
                }
            }
            if (dp[j][1] != -1) {
                if (j + v[i] <= V) {
                    if (v[i] % 2 == 0) {
                        if (dp[j][1] + c[i] > dp[j + v[i]][1]) {
                            dp[j + v[i]][1] = dp[j][1] + c[i];
                        }
                    }
                }
            }

        }
    }

    int maxi = 0;

    for (int i = 0; i <= V; i++) {
        if (maxi < dp[i][0])
            maxi = dp[i][0];
        if (maxi < dp[i][1])
            maxi = dp[i][1];
    }
    printf("%d",maxi);
    return 0;
}