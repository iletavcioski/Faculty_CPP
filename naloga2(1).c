
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izloci(Vozlisce* zacetek) {
    int k = zacetek->podatek;
    Vozlisce* p = (Vozlisce*)malloc(sizeof(Vozlisce));
    p = NULL;
    while (zacetek != NULL) {
        if (k == 0) {
            if (zacetek->naslednje == NULL) {
                p->naslednje = NULL;
                zacetek = zacetek->naslednje;
            }
            else {
            p->naslednje = zacetek->naslednje;
            zacetek->naslednje = NULL;
            zacetek = p->naslednje;
            k = zacetek->podatek;
            }
        }
        else {
            k--;
            p = zacetek;
            zacetek = zacetek->naslednje;
        }
    }
}

int main() {
    // koda za ro"cno testiranje (dopolnite po "zelji/potrebi)
    return 0;
}
