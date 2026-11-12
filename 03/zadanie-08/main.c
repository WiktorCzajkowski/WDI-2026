#include <stdio.h>
#include <stdlib.h>


int dodaj_fifo(int tablica[], int koniec, int liczba, int rozmiar);
int usun_fifo(int tablica[], int koniec);
int dodaj_lifo(int tablica[], int koniec, int liczba, int rozmiar);
int usun_lifo(int tablica[], int koniec);
void wypisz(int tablica[], int koniec);

int main() {
    int fifo[10];
    int lifo[10];

    int koniec_fifo = 0;
    int koniec_lifo = 0;

    koniec_fifo = dodaj_fifo(fifo, koniec_fifo, 10, 10);
    koniec_fifo = dodaj_fifo(fifo, koniec_fifo, 20, 10);
    koniec_fifo = dodaj_fifo(fifo, koniec_fifo, 30, 10);

    printf("FIFO przed usuwaniem: ");
    wypisz(fifo, koniec_fifo);

    koniec_fifo = usun_fifo(fifo, koniec_fifo);

    printf("FIFO po usunieciu: ");
    wypisz(fifo, koniec_fifo);

    printf("\n");




    koniec_lifo = dodaj_lifo(lifo, koniec_lifo, 10, 10);
    koniec_lifo = dodaj_lifo(lifo, koniec_lifo, 20, 10);
    koniec_lifo = dodaj_lifo(lifo, koniec_lifo, 30, 10);

    printf("LIFO przed usuwaniem: ");
    wypisz(lifo, koniec_lifo);

    koniec_lifo = usun_lifo(lifo, koniec_lifo);

    printf("LIFO po usunieciu: ");
    wypisz(lifo, koniec_lifo);

    return 0;
}

int dodaj_fifo(int tablica[], int koniec, int liczba, int rozmiar) {
    if (koniec==rozmiar) {
        printf("Kolejka FIFO jest pelna!\n");
        return koniec;
    }
    tablica[koniec]=liczba;
    koniec++;

    return koniec;
}

int usun_fifo(int tablica[], int koniec) {
    int i;
    if (koniec==0) {
        printf("Kolejka FIFO jest pusta!\n");
        return koniec;
    }

    printf("Usunieto FIFO: %d\n", tablica[0]);

    for (i=0; i<koniec-1; i++) {
        tablica[i]=tablica[i+1];
    }
    koniec--;

    return koniec;
}

int dodaj_lifo(int tablica[], int koniec, int liczba, int rozmiar) {
    if (koniec==rozmiar) {
        printf("Stos LIFO jest pelny!\n");
        return koniec;
    }
    tablica[koniec]=liczba;
    koniec++;

    return koniec;
}

int usun_lifo(int tablica[], int koniec) {
    if (koniec==0) {
        printf("Stos LIFO jest pusty!\n");
        return koniec;
    }
    koniec--;
    printf("Usunieto LIFO: %d\n", tablica[koniec]);

    return koniec;
}

void wypisz(int tablica[], int koniec) {
    int i;
    if (koniec==0) {
        printf("Pusta\n");
        return;
    }
    for (i=0; i<koniec; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}