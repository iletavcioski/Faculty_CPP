#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int broj[10];
    if (n == 1) {
        char ss[1000003];
        for (int i = 0; i < 1000003; i++)
            ss[i] = '-';
        scanf("%s", &ss);

        char prv = '-';
        int brojac = 0;
        for (int i = 0; i < 1000002; i++) {
            if (ss[i] != prv) {

                if (prv == '#') {
                    printf("%c%c%d%c",'#','#',brojac,'#');
                }
                else if (prv != '-'){
                    if (brojac <= 4) {
                        for (int j = 0 ;j < brojac; j++)
                            printf("%c",prv);
                    }
                    else
                        printf("%c%c%d%c",'#',prv,brojac,'#');
                }
                brojac = 1;
                prv = ss[i];
            }
            else {
                brojac++;
            }
            if (ss[i] == '\0')
                break;
        }
    }
    else {
        char ss[1000003];
        for (int i = 0; i < 1000003; i++)
            ss[i] = '-';
        scanf("%s", &ss);

        for (int i = 0; i < 1000002; i++) {
            if (ss[i] == '\0')
                break;
            if (ss[i] != '#')
                printf("%c",ss[i]);
            else {
                if (ss[i + 1] == '#') {
                    i += 2;
                    int brojc = 0;
                    int pow = 1;

                    while (ss[i] != '#') {
                        broj[brojc] = ss[i] - '0';
                        brojc++;
                        i++;
                        pow *= 10;
                        if (ss[i] == '#')
                            break;
                    }
                   // i++;
                    int brojac = 0;
                    pow/=10;
                    for (int j = 0; j < brojc; j++) {
                        brojac += (broj[j] * pow);
                        pow /= 10;
                    }
                    for (int j = 0; j < brojac; j++) {
                        printf("%c",'#');
                    }
                }
                else {
                    char a = ss[i + 1];
                    i += 2;
                    int brojc = 0;
                    int pow = 1;

                    while (ss[i] != '#') {
                        broj[brojc] = ss[i] - '0';
                        brojc++;
                        i++;
                        pow *= 10;
                        if (ss[i] == '#')
                            break;
                    }
                    //i++;
                    int brojac = 0;
                    pow/=10;
                    for (int j = 0; j < brojc; j++) {
                        brojac += (broj[j] * pow);
                        pow /= 10;
                    }
                    for (int j = 0; j < brojac; j++) {
                        printf("%c",a);
                    }
                }
            }
        }
    }

    return 0;
}