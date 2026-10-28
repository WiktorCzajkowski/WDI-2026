#include <stdio.h>

int main() {
    int liczba, suma = 0;
    int i;

    printf("Podaj liczbe: ");
    fflush(stdout);
    scanf("%d", &liczba);

    for (i=0; i<liczba; i++) {
        suma=suma+i;
    }

    printf("Suma wynosi: %d\n", suma);

    return 0;
}