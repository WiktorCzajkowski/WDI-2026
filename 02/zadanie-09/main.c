#include <stdio.h>
#include <stdlib.h>

int silnia(int);


int main() {
    int a;

    printf("Podaj silnie liczby: \n");
    scanf("%d",&a);
    printf("Silnia liczby %d jest rowna: %d\n",a,silnia(a));
    return 0;
}

int silnia(int a) {
    int i,wynik=1;
    for (i=1; i<=a; i++) {
        wynik=wynik*i;
    }
    return wynik;
}