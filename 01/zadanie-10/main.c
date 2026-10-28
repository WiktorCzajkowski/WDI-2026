#include <stdio.h>

int main() {
    int ocena1 = 5;
    int ocena2 = 3;
    int ocena3 = 1;
    int ocena4 = 4;
    int ocena5 = 2;

    int suma;
    int niedostateczne = 0;
    float srednia;

    suma = ocena1 + ocena2 + ocena3 + ocena4 + ocena5;
    srednia = suma/5.0;

    if (ocena1==1) {
        niedostateczne++;
    }

    if (ocena2==1) {
        niedostateczne++;
    }

    if (ocena3==1) {
        niedostateczne++;
    }

    if (ocena4==1) {
        niedostateczne++;
    }

    if (ocena5==1) {
        niedostateczne++;
    }

    printf("Srednia ocen: %.2f\n", srednia);
    printf("Liczba ocen niedostatecznych: %d\n", niedostateczne);

    return 0;
}