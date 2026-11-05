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
    if (wykladnik==0) {
        return 1;
    }
    if (wykladnik==1) {
        return liczba;
    }
    return liczba*potega(liczba,wykladnik-1);
}