#include <stdio.h>
#include <stdlib.h>

int potega(int,int);


int main() {
    int liczba,wykladnik;

    printf("Podaj liczbe ktora bedzie podniesiona do potegi: \n");
    scanf("%d",&liczba);
    printf("Podaj wykladnik potegi: \n");
    scanf("%d",&wykladnik);
    printf("Wynik potegi: %d",potega(liczba,wykladnik));

    return 0;
}

int potega(int liczba,int wykladnik) {
    int wynik=liczba,i;
    if (wykladnik==0) {
        return 1;
    }
    for (i=1;i<wykladnik;i++) {
        wynik=wynik*liczba;
    }
    return wynik;
}