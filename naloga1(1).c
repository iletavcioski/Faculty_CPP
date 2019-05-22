
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    FILE *in;
    FILE *rez;
    char vhod[101];
    char izhod[101];
    scanf("%s", vhod);
    scanf("%s", izhod);
    in = fopen(vhod, "r");
    rez = fopen(izhod, "w");
    char* niz = calloc(1001,sizeof(char));
    int maxi = -1;
    while (fgets(niz,1001,in) != NULL) {
        
      
        int broj = 0;
        
        for (int i = 0; i < strlen(niz); i++){
            if (niz[i] == ' ')
                broj++;
        }
        if (broj > maxi)
            maxi = broj;
    }
    fprintf(rez,"%d\n",maxi + 1);
    fclose(in);
    fclose(rez);

    return 0;
}
