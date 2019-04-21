
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* skladnost(char* s, char* t, int* maks) {
    int* niza = malloc(strlen(t) * sizeof(int));
	
	int maxi = 0;

	for (int i = 0; i < strlen(t); i++) {
	int br = 0;
int p = i;
		for (int j = 0; j < strlen(s); j++) {
			if (p == strlen(t))
				break;
			if (t[p] != s[j]) {
				break;
			}
			p++;
			br++;
		}
	*(niza + i) = br;
	if (br > maxi) {
	maxi = br;
}
	}
*maks = maxi;
    return niza;
}

int main() {
    // koda za ro"cno testiranje (dopolnite po "zelji/potrebi)
    return 0;
}
