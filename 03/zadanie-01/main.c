#include <stdio.h>
#include <stdlib.h>

int fibo(int);

int main() {
    int n;
    printf("Podaj ktory wyraz ciagu fibbonaciego obliczyc: ");
    scanf("%d", &n);
    printf("%d wyraz ciagu fibbonaciego: %d \n",n,fibo(n));
}

int fibo(int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}