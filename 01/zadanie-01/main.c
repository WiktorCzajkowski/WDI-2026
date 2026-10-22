#include <stdio.h>

int main() {


    printf("Cześć ile masz lat?\n");
    fflush(stdout);
    int wiek;
    scanf("%d", &wiek);

    printf("Masz ");
    printf("%d", wiek);
    printf(" lat \n");
    return 0;
}
