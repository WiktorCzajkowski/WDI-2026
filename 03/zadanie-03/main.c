#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int sufit(float);
int zaokragli(float);
int podloga(float);

int main() {
    float n;

    printf("Podaj liczbe: ");
    scanf("%f", &n);
    printf("Ceiling: %d \n",sufit(n));
    printf("Round: %d \n",zaokragli(n));
    printf("Floor: %d \n",podloga(n));
    return 0;
}

int sufit(float n) {
    int liczba=(int)n;
    if(liczba<n) {
        liczba++;
    }
    return liczba;
}

int zaokragli(float n) {
    int wynik=0;
    if(n>0) {
        return wynik=(int)(n+0.5);
    }
    else {
        return wynik=(int)(n-0.5);
    }

}

int podloga(float n) {
    int liczba=(int)n;
    if(liczba>n) {
        liczba--;
    }
    return liczba;
}