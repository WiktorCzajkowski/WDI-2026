#include <stdio.h>
#include <stdlib.h>

int max(int,int);
int min(int,int);


int main() {
    int a,b;

    printf("Podaj a: \n");
    scanf("%d",&a);
    printf("Podaj b: \n");
    scanf("%d",&b);
    printf("Wieksza liczba to: %d\n", max(a,b));
    printf("Mniejsza liczba to: %d\n", min(a,b));
    return 0;
}

int max(int a,int b) {
    if (a>b) {
        return a;
    }
    return b;
}
int min(int a,int b) {
    if (a<b) {
        return a;
    }
    return b;
}
