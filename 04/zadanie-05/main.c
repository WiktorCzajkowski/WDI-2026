#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void zmianaLiczba(char ciag[]);

int main() {
    char ciag[200];

    printf("Podaj ciag cyfr tworzacych liczbe: ");
    fgets(ciag, 200, stdin);
    zmianaLiczba(ciag);
    return 0;
}

void zmianaLiczba(char ciag[]) {
    bool poprawna = true;
    int liczba = 0;
    int znak=1;
    int i=0;
    if (ciag[0] == '-') {
        znak = -1;
        i=1;
    }
    for (i; i<strlen(ciag); i++) {
        if (ciag[i] != '\0' && ciag[i] != '\n') {
            if (ciag[i]<'0' || ciag[i]>'9') {
                poprawna = false;
                break;
            }
            liczba = liczba * 10 + ciag[i] - '0';
        }
    }
    if (poprawna) {
        printf("Liczba to: %d \n",liczba*znak);
    }
    else {
        printf("Podany ciag nie jest liczba");
    }
}