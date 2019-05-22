#include <stdio.h>
int n, k;
int rek(int last, int in, int b) {
    if (b == 0)
        return 1;
    if (in == n)
        return 0;
    if (in - last > 1) 
        return rek(in, in + 1, b - 1) + rek(last, in + 1, b); 
    else 
        return rek(last, in + 1, b);
}
int main() {
    scanf("%d %d", &n, &k);
    printf("%d", rek(-2, 0, k));
    return 0;
}