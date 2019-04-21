
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

/*
 * TESTNI PRIMERI:
 *
 * J1 (S1--S5): 
 *    kazalci d, e, f in g so NULL;
 *    vsak veljaven kazalec ka"ze v svojo tabelo
 *
 * J2 (S6--S10): 
 *    kazalca f in g sta NULL;
 *    vsak veljaven kazalec ka"ze v svojo tabelo
 *
 * J3 (S11--S15): 
 *    kazalca f in g sta NULL;
 *    ve"c kazalcev lahko ka"ze na isti element iste tabele,
 *    ne morejo pa kazati na razli"cne elemente iste tabele
 *
 * J4 (S16--S20):
 *    vsak veljaven kazalec ka"ze v svojo tabelo
 *
 * J5--J6 (S21--S30):
 *    ve"c kazalcev lahko ka"ze na isti element iste tabele,
 *    ne morejo pa kazati na razli"cne elemente iste tabele
 *
 * J7--J10 (S31--S50):
 *    brez omejitev
 */

int steviloPozitivnih(T* t) {
    int br = 0;
	int i = 0;
	while(t->b != NULL && t->b[i] != 0) {
	if (t->b[i] > 0)
	br++;
	t->b[i] = -1;
	i++;
	if (i == 42)
	break;
	}
	i = 0;

	while (t->c != NULL && t->c[i] != 0) {
	if (t->c[i] > 0)
	br++;
	t->c[i] = -1;
	i++;
	}
	
	i = 0;

	while ((t -> d) != NULL && (t->d)[i] != NULL) {
	int j = 0;
	while ((t->d)[i][j] != 0) {
		if ((t->d)[i][j] > 0)
		br++;
		(t->d)[i][j] = -1;
		j++;
	}
	i++;
	if (i == 42)
	break;
	}

	i = 0;
	while ((t -> e) != NULL && (t->e)[i] != NULL) {
	int j = 0;
	while ((t->e)[i][j] != 0) {
		if ((t->e)[i][j] > 0)
		br++;
		(t->e)[i][j] = -1;
		j++;
	}
	i++;
	}

	i = 0;
	while (t->f != NULL && (t->f)[i].a != 0) {
		if ((t->f)[i].a > 0) {
		br++;
		}
	(t->f)[i].a = -1;
	i++;
	}
	i=0;
	while (t->g != NULL && (t->g)[i] != NULL) {
		int j = 0;
		while ((t->g)[i][j].a != 0) {
		if ((t->g)[i][j].a > 0)
		br++;
		(t->g)[i][j].a = -1;
		j++;
		} 
	i++;
	}
    return br;
}

int main() {
    // koda za ro"cno testiranje (dopolnite po "zelji/potrebi)
    return 0;
}
