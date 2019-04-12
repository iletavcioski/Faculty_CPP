#include <stdio.h>

int main() {
    int maxi = -1e9;
    int maxi1 = 0;
    int brcek = 0;

    int krajcek = 0;
    int krajind = 0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        maxi1 += a;
        brcek++;
        if (maxi < maxi1) {
            krajcek = brcek;
            krajind = i + 1 - brcek;
            maxi = maxi1;
        }

        if (maxi1 < 0) {
            maxi1 = 0;
            brcek = 0;
        }
    }
    printf("%d %d %d\n", krajind,krajcek,maxi);
    return 0;
}