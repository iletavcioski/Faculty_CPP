
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int br = -1;
int vsota = 0;
    while (br != 0) {
	scanf("%d", &br);
	if (br == 0) 
	break;
	if (br % 10 == 2 && (br/10)%10 == 4) {
vsota += br;
}
    }
	printf("%d\n",vsota);
    return 0;
}
