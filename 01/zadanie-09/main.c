#include <stdio.h>

int main() {
    int a,b;

    printf("Podaj pierwsza liczbe: ");
    fflush(stdout);
    scanf("%d", &a);

    printf("Podaj druga liczbe: ");
    fflush(stdout);
    scanf("%d", &b);

    if (b==0) {
        printf("Nie mozna dzielic przez zero!\n");
    }
    else if (a%b==0) {
        printf("Pierwsza liczba jest podzielna przez druga.\n");
    }
    else {
        printf("Pierwsza liczba nie jest podzielna przez druga.\n");
    }

    return 0;
}