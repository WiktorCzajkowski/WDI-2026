#include <stdio.h>
#include <stdlib.h>

float srednia(int tablica[], int rozmiar);
void wieksze_od_sredniej(int tablica[], int rozmiar, float sr);
void min_max(int tablica[], int rozmiar);
int suma_nieparzystych(int tablica[], int rozmiar);
void wypisz_od_konca(int tablica[], int rozmiar);

int main() {

    int tablica[10];
    int rozmiar=10,i;
    float srd;

    for (i = 0; i<rozmiar; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &tablica[i]);
    }

    srd = srednia(tablica, rozmiar);
    printf("\nSrednia arytmetyczna: %.2f\n", srd);

    printf("\nLiczby wieksze od sredniej:\n");
    wieksze_od_sredniej(tablica, rozmiar, srd);

    min_max(tablica, rozmiar);

    printf("\nSuma liczb nieparzystych: %d\n", suma_nieparzystych(tablica, rozmiar));

    printf("\nTablica od konca:\n");
    wypisz_od_konca(tablica, rozmiar);

    return 0;
}

float srednia(int tablica[], int rozmiar) {
    float srednia=0;
    int i;

    for (i=0; i<rozmiar; i++) {
        srednia += (float)tablica[i];
    }

    return srednia/(float)rozmiar;
}

void wieksze_od_sredniej(int tablica[], int rozmiar, float sr) {
    int i;

    for (i=0; i<rozmiar; i++) {
        if (tablica[i]>sr) {
            printf("%d ", tablica[i]);
        }
    }
    printf("\n");
}

void min_max(int tablica[], int rozmiar) {
    int min=tablica[0], max=tablica[0], i;

    for (i=1; i<rozmiar; i++) {
        if (tablica[i]<min) {
            min=tablica[i];
        }
        if (tablica[i]>max) {
            max=tablica[i];
        }
    }

    printf("\nNajmniejsza liczba: %d\n", min);
    printf("Najwieksza liczba: %d\n", max);
}

int suma_nieparzystych(int tablica[], int rozmiar) {
    int suma=0,i;

    for (i=0; i<rozmiar; i++) {
        if (tablica[i]%2!=0) {
            suma+=tablica[i];
        }
    }
    return suma;
}

void wypisz_od_konca(int tablica[], int rozmiar) {
    int i;

    for (i=rozmiar-1; i>=0; i--) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}