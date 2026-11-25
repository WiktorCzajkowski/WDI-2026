#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    char wyraz[200];
    int wystapienia[26] = {0}, i;

    printf("Podaj wyraz: ");
    fgets(wyraz, 200, stdin);

    for (i=0; wyraz[i]!='\0'; i++) {
        char znak=tolower((unsigned char)wyraz[i]);

        if (znak>='a' && znak<='z') {
            wystapienia[znak-'a']++;
        }
    }

    printf("\nLiczba wystapien liter:\n");

    for (i=0; i<26; i++) {
        if (wystapienia[i]>0) {
            printf("%c: %d\n", 'a'+i, wystapienia[i]);
        }
    }

    return 0;
}
