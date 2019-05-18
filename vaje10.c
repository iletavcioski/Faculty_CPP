
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int vsotaI(Vozlisce* zacetek) {

    if (zacetek == NULL)
        return 0;
    return zacetek->podatek + vsotaI((zacetek->naslednje)); 
}

int vsotaR(Vozlisce* zacetek) {
    if (zacetek == NULL)
        return 0;
    return zacetek->podatek + vsotaI((zacetek->naslednje)); 
}

Vozlisce* vstaviUrejenoI(Vozlisce* zacetek, int element) {
    if (zacetek == NULL) {
        struct Vozlisce* t = (struct Vozlisce*)malloc(sizeof(struct Vozlisce));
        t->podatek = element;
        t->naslednje = zacetek;
        return t;
    }

    if (zacetek->naslednje == NULL) {
        struct Vozlisce* t = (struct Vozlisce*)malloc(sizeof(struct Vozlisce));
        t->podatek = zacetek->podatek;
        t->naslednje = NULL;
        zacetek->naslednje = t;
        zacetek->podatek = element;
        return zacetek;
    }
    
    if (zacetek->podatek > element) {
        int a = zacetek->podatek;
        zacetek->podatek = element;
        vstaviUrejenoI(zacetek->naslednje, a);
         
    }
    else {
        vstaviUrejenoI(zacetek->naslednje, element);
    }
    return zacetek;

}

Vozlisce* vstaviUrejenoR(Vozlisce* zacetek, int element) {

    if (zacetek == NULL) {
        struct Vozlisce* t = (struct Vozlisce*)malloc(sizeof(struct Vozlisce));
        t->podatek = element;
        t->naslednje = zacetek;
        return t;
    }
    else if (zacetek->naslednje == NULL) {
        if (zacetek->podatek > element) {
        struct Vozlisce* t = (struct Vozlisce*)malloc(sizeof(struct Vozlisce));
        t->podatek = zacetek->podatek;
        t->naslednje = NULL;
        zacetek->naslednje = t;
        zacetek->podatek = element;
        
        } else {
        struct Vozlisce* t = (struct Vozlisce*)malloc(sizeof(struct Vozlisce));
        t->podatek = element;
        t->naslednje = NULL;
        zacetek->naslednje = t;
        
        }
        return zacetek;
    }
    else if (zacetek->podatek > element) {
        int a = zacetek->podatek;
        zacetek->podatek = element;
        vstaviUrejenoR(zacetek->naslednje, a);
         
    }
    else {
        vstaviUrejenoR(zacetek->naslednje, element);
    }
    return zacetek;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
