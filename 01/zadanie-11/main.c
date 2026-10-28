#include <stdio.h>

int main() {
    int liczba;

    printf("Podaj liczbe calkowita: ");
    fflush(stdout);
    scanf("%d", &liczba);

    if (liczba>0 && liczba%2==0) {
        printf("Liczba jest dodatnia i parzysta.\n");
    }
    else {
        printf("Liczba nie jest jednoczesnie dodatnia i parzysta.\n");
    }

    return 0;
}