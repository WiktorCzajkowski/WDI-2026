#include <stdio.h>

int main() {

    char inicjal;
    int wiek;
    printf("Podaj 1 litere imienia: ");
    fflush(stdout);
    scanf("%c", &inicjal);
    printf("Podaj wiek: ");
    fflush(stdout);
    scanf("%d", &wiek);

    printf("Inicjal: %c, Wiek: %d", inicjal, wiek);
    return 0;
}
