#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    char imie[50];
    int i = 0;

    printf("Podaj imie: ");
    scanf("%49s", imie);

    imie[0]=toupper((unsigned char)imie[0]);

    for (i=1; imie[i]!='\0'; i++) {
        imie[i]=tolower((unsigned char)imie[i]);
    }

    printf("Imie: %s\n", imie);

    i=0;
    char imie2[50];

    printf("Podaj imie: ");
    scanf("%49s", imie2);


    if (imie2[0]>='a' && imie2[0]<='z') {
        imie2[0]=imie2[0]-32;
    }

    for (i=1; imie2[i]!='\0'; i++) {
        if (imie2[i]>='A' && imie2[i]<='Z') {
            imie2[i]=imie2[i]+32;
        }
    }

    printf("Imie: %s\n", imie2);
    return 0;
}
