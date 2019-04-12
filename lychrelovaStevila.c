#include <stdio.h>

long long f(long long a) {
    long long br = 1;
    long long p = a;
    long long p1 = a;
    while (p != 0) {
        
        p /= 10;
        br *= 10;
    }

    br /= 10;
    long long brojac = 0;
    while (a != 0) {
        brojac += (a%10) * br;
        br /= 10;
        a /= 10;
    }
    return (brojac + p1);
}

int f1(long long a) {
    long long br = 1;
    long long p = a;
    long long p1 = a;
    while (p != 0) {
        p /= 10;
        br *= 10;
    }

    br /= 10;
    long long brojac = 0;
    while (a != 0) {
        brojac += (a%10) * br;
        br /= 10;
        a /= 10;
    }
    if (brojac == p1) 
        return 1;
    else
         return 0;
}
int main() {
    int k;
    scanf("%d", &k);

    int a, b;
    scanf("%d %d", &a, &b);
    int brojac = 0;
    for (long long i = a; i <= b; i++) {
        
        long long p = i;
        int cc = 0;
        long long nv = p;
        for (int j = 0; j < k; j++) {
            
            nv = f(nv);
        
            if (f1(nv) == 1) {
                cc = 1;
                break;
            }
            else if (nv >= 1e17) {
                break;
            }
        }
        if (cc == 0) {
            
            brojac++;
        }
    }
    printf("%d", brojac);
    return 0;
}