#include <stdio.h>

int main() {

    int a,b,c;
    float wynik;

    printf("Podaj 3 cyfry\n");
    fflush(stdout);
    scanf("%d%d%d",&a,&b,&c);

    printf("Suma 3 cyfr: %.0f\n",wynik=a+b+c);
    printf("Różnica pierwszych dwóch: %.0f\n",wynik=a-b);
    printf("Iloczyn pierwszej i trzeciej: %.0f\n",wynik=a*c);
    printf("Iloraz trzeciej i drugiej: %.1f\n",wynik=c/b);

    return 0;
}
