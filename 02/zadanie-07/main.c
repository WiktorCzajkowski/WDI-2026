#include <stdio.h>
#include <stdlib.h>

int main() {
    const unsigned granica=20U;
    unsigned suma=0U, i;

    for (i=1U; i<=granica; i++) {
        if (i%3U==0U) {
            suma+=i;
        }
    }

    printf("%u \n", suma);
    return 0;
}
