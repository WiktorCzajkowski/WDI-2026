#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void czyAnagram(int wystapienia1[], int wystapienia2[]);

int main() {
    char wyraz[200];
    char wyraz2[200];
    int wystapienia1[26] = {0}, i;
    int wystapienia2[26] = {0};

    printf("Podaj 1 wyraz: ");
    fgets(wyraz, 200, stdin);

    printf("Podaj 2 wyraz: ");
    fgets(wyraz2, 200, stdin);

    for (i=0; wyraz[i]!='\0'; i++) {
        char znak=tolower((unsigned char)wyraz[i]);

        if (znak>='a' && znak<='z') {
            wystapienia1[znak-'a']++;
        }
    }

    for (i=0; wyraz2[i]!='\0'; i++) {
        char znak=tolower((unsigned char)wyraz2[i]);

        if (znak>='a' && znak<='z') {
            wystapienia2[znak-'a']++;
        }
    }

    czyAnagram(wystapienia1,wystapienia2);



    return 0;
}
void czyAnagram(int wystapienia1[], int wystapienia2[]) {
    bool anagram = true;
    int i;
    for (i = 0; i < 26; i++) {
        if (wystapienia1[i] != wystapienia2[i]) {
            anagram = false;
        }
    }
    if (anagram) {
        printf("Te wyrazy sa anagramami. \n");
    }
    else {
        printf("Te wyrazy nie sa anagramami. \n");
    }
}