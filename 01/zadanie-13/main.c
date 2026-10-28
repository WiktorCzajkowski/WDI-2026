#include <stdio.h>

int main() {
    int n,i;
    float liczba,suma=0,srednia;

    printf("Ile liczb chcesz podac? \n");
    scanf("%d", &n);

    if (n<=0) {
        printf("Liczba n musi byc wieksza od zera.\n");
    }
    else {
        for (i=1; i<=n; i++) {
            printf("Podaj liczbe %d: ", i);
            scanf("%f", &liczba);

            suma=suma+liczba;
        }

        srednia=suma/n;

        printf("Suma liczb: %.2f\n", suma);
        printf("Srednia liczb: %.2f\n", srednia);
    }

    return 0;
}