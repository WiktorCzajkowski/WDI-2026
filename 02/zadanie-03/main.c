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

    switch (znak) {
        case '+':
            wynik = a + b;
            printf("Wynik: %.2f\n", wynik);
            break;

        case '-':
            wynik = a - b;
            printf("Wynik: %.2f\n", wynik);
            break;

        case '*':
            wynik = a * b;
            printf("Wynik: %.2f\n", wynik);
            break;

        case '/':
            wynik = a / b;
            printf("Wynik: %.2f\n", wynik);
            break;

        case '%':
            wynik = (int)a%(int)b;
            printf("Wynik: %.2f\n", wynik);
            break;

        default:
            printf("Nieprawidlowy znak dzialania!");
            break;
    }
    return 0;
}