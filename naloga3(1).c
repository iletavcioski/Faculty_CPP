
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int niz[10];
int vis[10];
int mat[10][10];
int n;
int kraj;
int poc;
void rek(int x, int s) {
    
    if (x == kraj) {
        for (int i = 0; i <= s; i++) {
            printf("%d",niz[i]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        if (mat[x][i] == 1) {
            if (vis[i] == 0) {
                vis[i] = 1;
                niz[s + 1] = i;
                rek(i, s + 1);
                vis[i] = 0;
                niz[s + 1] = 0;
            }
        }
    }
    return;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    }
    scanf("%d %d", &poc, &kraj);
    for (int i = 0; i < n; i++) {
        vis[i] = 0;
        niz[i] = 0;
    }
    niz[0] = poc;
    vis[poc] = 1;
    rek(poc,0);

    return 0;
}
