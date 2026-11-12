#include <stdio.h>
#include <stdlib.h>


void for_przod(int tablica[], int rozmiar);
void for_tyl(int tablica[], int rozmiar);
void while_przod(int tablica[], int rozmiar);
void while_tyl(int tablica[], int rozmiar);
void dowhile_przod(int tablica[], int rozmiar);
void dowhile_tyl(int tablica[], int rozmiar);

int main() {

    int tablica[] = {1,2,3,4,5};
    int rozmiar = 5;

    printf("FOR od poczatku:\n");
    for_przod(tablica, rozmiar);

    printf("FOR od konca:\n");
    for_tyl(tablica, rozmiar);

    printf("WHILE od poczatku:\n");
    while_przod(tablica, rozmiar);

    printf("WHILE od konca:\n");
    while_tyl(tablica, rozmiar);

    printf("DO WHILE od poczatku:\n");
    dowhile_przod(tablica, rozmiar);

    printf("DO WHILE od konca:\n");
    dowhile_tyl(tablica, rozmiar);

    return 0;
}

void for_przod(int tablica[],int rozmiar) {
    int i;

    for (i=0; i<rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

void for_tyl(int tablica[],int rozmiar) {
    int i=rozmiar-1;

    for (i; i>=0; i--){
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

void while_przod(int tablica[],int rozmiar) {
    int i=0;

    while(i<rozmiar){
        printf("%d ", tablica[i]);
        i++;
    }
    printf("\n");
}

void while_tyl(int tablica[],int rozmiar) {
    int i=rozmiar-1;

    while (i>=0) {
        printf("%d ", tablica[i]);
        i--;
    }
    printf("\n");
}

void dowhile_przod(int tablica[],int rozmiar) {
    int i=0;

    do{
        printf("%d ", tablica[i]);
        i++;
    }while(i<rozmiar);
    printf("\n");
}

void dowhile_tyl(int tablica[],int rozmiar) {
    int i=rozmiar-1;

    do{
        printf("%d ", tablica[i]);
        i--;
    }while(i>=0);
    printf("\n");
}
