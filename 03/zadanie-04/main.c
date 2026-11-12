#include <stdio.h>
#include <stdlib.h>

int suma_cyfr(int);

int main() {
    int n=507;
    printf("Suma cyfr liczby 507: %d", suma_cyfr(n));
    return 0;
}

int suma_cyfr(n) {
    if (n==0) {
        return 0;
    }
    return n%10 + suma_cyfr(n/10);
}