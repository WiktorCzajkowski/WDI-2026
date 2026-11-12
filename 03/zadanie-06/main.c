#include <stdio.h>
#include <stdlib.h>


float oblicz_srednia(int tablica[], int rozmiar);

int main() {

    int tablica[] = {1,2,3,4,5};
    int rozmiar = 5,i;
    float srednia=oblicz_srednia(tablica, rozmiar);
    printf("Srednia: %.2f \n", srednia);
    printf("Liczby wieksze od sredniej: \n");
    for (i=0; i<rozmiar; i++) {
        if (tablica[i] > srednia) {
            printf("%d \n", tablica[i]);
        }
    }
    return 0;
}

float oblicz_srednia(int tablica[], int rozmiar) {
    float srednia=0;
    int i;
    for (i=0; i<rozmiar; i++) {
        srednia += (float)tablica[i];
    }
    srednia = srednia / (float)rozmiar;
    return srednia;
}