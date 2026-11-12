#include <stdio.h>
#include <stdlib.h>

void merge_sort(int tablica[], int lewy, int prawy);
void scal(int tablica[], int lewy, int srodek, int prawy);
void wypisz(int tablica[], int rozmiar);

int main() {
    int tablica[10],i;

    printf("Podaj 10 liczb:\n");

    for (i=0; i<10; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%d", &tablica[i]);
    }

    merge_sort(tablica, 0, 9);

    printf("\nTablica po sortowaniu:\n");
    wypisz(tablica, 10);

    return 0;
}

void merge_sort(int tablica[], int lewy, int prawy) {
    if (lewy<prawy) {
        int srodek=(lewy+prawy)/2;

        merge_sort(tablica, lewy, srodek);

        merge_sort(tablica, srodek+1, prawy);

        scal(tablica, lewy, srodek, prawy);
    }
}

void scal(int tablica[], int lewy, int srodek, int prawy) {
    int pomocnicza[10];

    int i=lewy;
    int j=srodek+1;
    int k=lewy;

    while (i<=srodek && j<=prawy) {
        if (tablica[i]<=tablica[j]) {
            pomocnicza[k]=tablica[i];
            i++;
        } else {
            pomocnicza[k]=tablica[j];
            j++;
        }
        k++;
    }
    while (i<=srodek) {
        pomocnicza[k]=tablica[i];
        i++;
        k++;
    }
    while (j<=prawy) {
        pomocnicza[k]=tablica[j];
        j++;
        k++;
    }
    for (i=lewy; i<=prawy; i++) {
        tablica[i]=pomocnicza[i];
    }
}

void wypisz(int tablica[], int rozmiar) {
    int i;
    for (i=0; i<rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}