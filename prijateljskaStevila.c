#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int br = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            br += i;
        }
    }

    int br2 = 0;
    for (int j = 1; j < br; j++) {
        if (br % j == 0) {
            br2 += j;
        }
    }
    if (n == br || br2 != n) {
        printf("NIMA\n");
    }
    else {
        printf("%d", br);
    }
    return 0;
}