#include <stdio.h>

int main() {
    float a, b, wynik;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    fflush(stdout);
    scanf("%f", &a);

    printf("Podaj druga liczbe: ");
    fflush(stdout);
    scanf("%f", &b);

    printf("Podaj znak dzialania (+, -, *, /, %%): ");
    fflush(stdout);
    scanf(" %c", &znak);

    if (znak=='+') {
        wynik = a+b;
        printf("Wynik: %.2f\n", wynik);
    }
    else if (znak=='-') {
        wynik = a-b;
        printf("Wynik: %.2f\n", wynik);
    }
    else if (znak=='*') {
        wynik = a*b;
        printf("Wynik: %.2f\n", wynik);
    }
    else if (znak=='/') {
        if (b==0) {
            printf("Blad! Nie mozna dzielic przez zero.\n");
        }
        else {
            wynik = a/b;
            printf("Wynik: %.2f\n", wynik);
        }
    }
    else if (znak=='%') {
        if (b==0) {
            printf("Blad! Nie mozna dzielic przez zero.\n");
        }
        else {
            wynik = (int)a%(int)b;
            printf("Reszta z dzielenia: %.2f\n", wynik);
        }
    }
    else {
        printf("Nieprawidlowy znak dzialania!\n");
    }

    return 0;
}