#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    FILE *f[n];
    char vhod[50];
    for (int i = 0; i < n; i++) {
        scanf("%s", vhod);
        f[i] = fopen(vhod, "r");
    }
    char izhod[50];
    scanf("%s", izhod);
    FILE *rezultat = fopen(izhod,"w");

    int ind = 0;
    int niza[1000001];
    for (int i = 0; i < n; i++) {
        while (fscanf(f[i],"%d",&niza[ind]) == 1) {
            ind++;
        }
    }
    for (int i = 0; i < ind; i++) {
        for (int j = i + 1; j < ind; j++) {
            if (niza[i] > niza[j]) {
                int tem = niza[i];
                niza[i] = niza[j];
                niza[j] = tem;
            }
        }
    }
    for (int i = 0; i < ind; i++) {
        fprintf(rezultat,"%d\n",niza[i]);
    }
    for (int i = 0; i < n; i++) {
        fclose(f[i]);
    }
    fclose(rezultat);
    return 0;
}