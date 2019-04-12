#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char s[105];
char ns[105];
int dp[105][105];
int brojac;

int res(int x, int y) {

    if (dp[x][y] != -1) {
        return dp[x][y];
    }

    if (x == strlen(s)) {
        return 0;
    }

    if (x == strlen(s) - 1 && y == strlen(ns) - 1 && (s[x] == ns[y] || s[x] == '?')) {
        return dp[x][y] = 1;
    }
    
    if (x == strlen(s) - 1 && s[x] == '*') {
        return dp[x][y] = 1;
    }

    if (y == strlen(ns)) {
        return 0;
    }

    int cc = 0;

    if (s[x] == ns[y]) {
        return dp[x][y] = cc |= res(x + 1, y + 1);
    }

    if (s[x] == '?') {
        return dp[x][y] = cc |= res(x + 1, y + 1);
    }

    if (s[x] == '*') {
        for (int i = y; i < strlen(ns); i++) {
            cc |= res(x + 1, i);
        }
    }

    return dp[x][y] = cc;

}
int main() {

    scanf("%s", s);

    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 105; j++) {
            ns[j] = '\0';
            for (int k = 0; k < 105; k++) {
                dp[j][k] = -1;
            }
        }

        scanf("%s", ns);

        brojac += res(0, 0);
    }

    printf("%d\n", brojac);
    return 0;
}