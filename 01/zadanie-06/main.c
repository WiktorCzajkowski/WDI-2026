#include <stdio.h>

int main() {

    int sekundy=3661,minuty,godziny;
    minuty= sekundy/60;
    godziny = minuty/60;
    sekundy = sekundy%60;
    minuty = minuty%60;
    printf("%d h %d min %d s\n ",godziny,minuty,sekundy);

    return 0;
}
