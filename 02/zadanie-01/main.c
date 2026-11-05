#include <stdio.h>

int main() {

    int a,b,c;

    printf("Podaj liczbe parzysta: ");
    scanf("%d",&a);

    while(a%2 != 0) {
        printf("Podaj liczbe parzysta: ");
        scanf("%d",&a);
    }

    printf("Podaj liczbe nieparzysta: ");
    scanf("%d",&b);

    while(b%2 == 0) {
        printf("Podaj liczbe nieparzysta: ");
        scanf("%d",&b);
    }

    printf("Podaj liczbe 0: ");
    scanf("%d",&c);

    while(c!=0) {
        printf("Podaj liczbe 0: ");
        scanf("%d",&c);
    }

    int suma,min,max;
    float srednia;

    if (a>b) {
        max=a;
        min=b;
    }else {
        max=b;
        min=a;
    }

    suma=a+b+c;
    srednia=(float)suma/3;


    printf("Min: %d, Max: %d, Suma: %d, Srednia: %.2f",min,max,suma,srednia);

    return 0;
}