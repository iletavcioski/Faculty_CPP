
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "naloga.h"

int vsota(int* zac, int* kon) {
    int i = 0;
    int brojac = 0;
    
    
    while (zac + i != kon) {
        brojac += *(zac + i);
        i++;
    }
    brojac += *kon;
    
    return brojac;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {

    
    if (*indeks != -1) {
       *kazalec = (t + *indeks);

    }
    else {
         *indeks = *kazalec - t;
    }
}

void frekvenceCrk(char* niz, int** frekvence) {
    int i = 0;
    *frekvence = malloc(27*sizeof(int));
    while (i < strlen(niz)) { 
        int a = *(niz + i);
        
        if (a >= 97 ) {
             a -= 32;
        }

            int br = a - 65;
            if (br >= 0 && br <= 26) {
            int ab = *(*frekvence + br);
            ab++;
           *(*frekvence + br) = ab;
            }
        i++;
    }
    
}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
