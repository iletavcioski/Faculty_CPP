#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[10000];
    int y[10000];
    int c[10000];

    int kx[10000];
    int ky[10000];

    for (int i = 0; i < 10000; i++) {
        kx[i] = ky[i] = -1e9;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d",&x[i],&y[i],&c[i]);
    }

    kx[0] = ky[0] = 0;

    int dir = 0;

    int k;
    scanf("%d", &k);

    int brojac = 1;
    while (k) {
        k--;
        int a = kx[0];
        int b = ky[0];
        //printf("%d %d\n",a,b);
        if (dir == 0) {

            ky[0]++;
        }
        if (dir == 1) {
            kx[0]--;
        }
        if (dir == 2) {
            ky[0]--;
        }
        if (dir == 3) {
            kx[0]++;
        }
        for (int j = 1; j < 10000; j++) {
            if (kx[j] == -1e9)
                break;
            int a1 = a;
            int b1 = b;
            a = kx[j];
            b = ky[j];
            kx[j] = a1;
            ky[j] = b1;
            if (kx[0] == kx[j] && ky[0] == ky[j]) {
                printf("%d %d %d\n", 0,kx[0],ky[0]);
                return 0;
            }
        }
        for (int j = 0; j < n; j++) {
            if (x[j] == kx[0] && ky[0] == y[j]) {
                if (c[j] == 1 && k > 0) {
                    kx[brojac] = a;
                    ky[brojac] = b;
                    /*if (kx[0] == kx[brojac] && ky[0] == ky[brojac]) {
                        printf("%d\n", 0 );
                        return 0;
                    }
                    */
                    brojac++;
                }
                else {
                    if (c[j] == 2) {
                        dir++;
                    }
                    else {
                        dir--;
                    }
                    if (dir == 4) {
                        dir = 0;
                    }
                    else if (dir == -1) {
                        dir = 3;
                    }
                }
                break;
            }
        }

    }
    printf("%d %d %d",brojac,kx[0],ky[0]);
    return 0;
}
