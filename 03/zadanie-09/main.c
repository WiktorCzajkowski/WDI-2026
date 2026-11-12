#include <stdio.h>
#include <stdlib.h>


void bubble_sort(int tablica[], int rozmiar);
void wypisz(int tablica[], int rozmiar);

int main() {
    int tablica[10],i;

    printf("Podaj 10 liczb:\n");

    for (i=0; i<10; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%d", &tablica[i]);
    }

    bubble_sort(tablica, 10);

    printf("\nTablica po sortowaniu:\n");
    wypisz(tablica, 10);

    return 0;
}

void bubble_sort(int tablica[], int rozmiar) {
    int pomocnicza,i,j;

    for (i=0; i<rozmiar-1; i++) {
        for (j=0; j<rozmiar-1-i; j++) {
            if (tablica[j]>tablica[j+1]) {
                pomocnicza=tablica[j];
                tablica[j]=tablica[j+1];
                tablica[j+1]=pomocnicza;
            }
        }
    }
}

void wypisz(int tablica[], int rozmiar) {
    int i;
    for (i=0; i<rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}