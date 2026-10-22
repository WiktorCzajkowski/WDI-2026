#include <stdio.h>

int main() {


    printf("Podaj liczbę z 5 miejscami po przecinku: \n");
    fflush(stdout);
    float liczba;
    scanf("%f", &liczba);
    printf("Do 1 miejsca %.1f\n", liczba);
    printf("Do 3 miejsc %.3f\n", liczba);
    printf("Do 5 miejsc %.5f\n", liczba);
    return 0;
}
