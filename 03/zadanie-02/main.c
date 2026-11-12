#include <stdio.h>
#include <stdlib.h>

int funkcja(int);

int main() {
    int n;
    printf("Podaj n-ty wyraz ciagu: ");
    scanf("%d", &n);
    printf("%d wyraz ciagu: %d \n",n,funkcja(n));
}

int funkcja(int n) {
    if (n<=0) {
        return 0;
    }
    if  (n==1) {
        return 1;
    }
    if  (n==2) {
        return 2;
    }if (n==3) {
        return 3;
    }
    return funkcja(n-1)*funkcja(n-2)-funkcja(n-3);
}