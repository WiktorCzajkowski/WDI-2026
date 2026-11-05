#include <stdio.h>

int main() {

    int n,i,wynik=0;

    printf("Podaj n (1-100): ");
    scanf("%d", &n);
    while (n<1 || n>100) {
        printf("Podaj n (1-100): ");
        scanf("%d", &n);
    }

    for(i=1;i<=n;i++) {
        wynik+=i*i;
    }

    printf("Wynik: %d\n", wynik);
    return 0;
}