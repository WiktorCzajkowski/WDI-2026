#include <stdio.h>
#include <stdlib.h>

void quick_sort(int tablica[], int l, int r);
int WybierzPunktPodzialu(int l, int r);
void Zamien(int tablica[], int i1, int i2);
int PodzielTablice(int tablica[], int l, int r);
void wypisz(int tablica[], int rozmiar);

int main() {
    int tablica[10],i;

    printf("Podaj 10 liczb:\n");

    for (i=0; i<10; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%d", &tablica[i]);
    }

    quick_sort(tablica, 0, 9);

    printf("\nTablica po sortowaniu:\n");
    wypisz(tablica, 10);

    return 0;
}

void quick_sort(int tablica[], int l, int r) {
    if (l < r) {
        int i = PodzielTablice(tablica, l, r);
        quick_sort(tablica, l, i-1);
        quick_sort(tablica, i+1, r);
    }
}

int PodzielTablice(int tablica[], int l, int r) {
    int indeksPodzialu = WybierzPunktPodzialu(l, r);
    int wartoscPodzialu = tablica[indeksPodzialu];
    Zamien(tablica,indeksPodzialu,r);

    int aktualnaPozycja = l;
    int i;
    for (i=l; i<r; i++) {
        if (tablica[i]<wartoscPodzialu) {
            Zamien(tablica, i, aktualnaPozycja);
            aktualnaPozycja++;
        }
    }
    Zamien(tablica, aktualnaPozycja, r);
    return aktualnaPozycja;
}


int WybierzPunktPodzialu(int l, int r) {
    return l+(r-l)/2;
}

void Zamien(int tablica[], int i1, int i2) {
    if (i1 != i2) {
        int pomocnicza = tablica[i1];
        tablica[i1] = tablica[i2];
        tablica[i2] = pomocnicza;
    }
}
void wypisz(int tablica[], int rozmiar) {
    int i;
    for (i=0; i<rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}