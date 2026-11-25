#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void szyfruj(char tekst[], int klucz);
void deszyfruj(char tekst[], int klucz);

int main() {
    char tekst[200]="";
    int klucz=3;
    int wybor;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Podaj tekst\n");
        printf("2. Szyfruj tekst\n");
        printf("3. Deszyfruj tekst\n");
        printf("4. Wyswietl tekst\n");
        printf("5. Zmien klucz\n");
        printf("6. Wyjscie\n");
        printf("Wybor: ");

        scanf("%d", &wybor);
        getchar();

        switch (wybor) {
            case 1:
                printf("Podaj tekst do szyfrowania: ");
                fgets(tekst, 200, stdin);
                break;

            case 2:
                szyfruj(tekst, klucz);
                printf("Tekst zostal zaszyfrowany.\n");
                break;

            case 3:
                deszyfruj(tekst, klucz);
                printf("Tekst zostal odszyfrowany.\n");
                break;

            case 4:
                printf("Aktualny tekst: %s", tekst);
                break;

            case 5:
                printf("Podaj nowy klucz: ");
                scanf("%d", &klucz);
                getchar();
                klucz=klucz%26;
                printf("Klucz zostal zmieniony na %d.\n", klucz);
                break;

            case 6:
                printf("Koniec programu.\n");
                break;

            default:
                printf("Niepoprawna opcja!\n");
        }

    } while (wybor!=6);

    return 0;
}

void szyfruj(char tekst[], int klucz) {
    int i;

    for (i=0; tekst[i]!='\0'; i++) {
        if (tekst[i]>='a' && tekst[i]<='z') {
            tekst[i]='a'+(tekst[i]-'a'+klucz+26)%26;
        }
        else if (tekst[i]>='A' && tekst[i]<='Z') {
            tekst[i]='A'+(tekst[i]-'A'+klucz+26)%26;
        }
    }
}

void deszyfruj(char tekst[], int klucz) {
    szyfruj(tekst, -klucz);
}