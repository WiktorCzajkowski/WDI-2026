#include <stdio.h>

int main() {

    int a,b;
    printf("Podaj a: ");
    fflush(stdout);
    scanf("%d",&a);
    printf("Podaj b: ");
    fflush(stdout);
    scanf("%d",&b);

    if(a>b) {
        printf("i. %d \n",a);
        printf("ii. %d \n",b);
        printf("iii. %d > %d \n",a,b);
    }else if(a<b) {
        printf("i. %d \n",b);
        printf("ii. %d \n",a);
        printf("iii. %d < %d \n",a,b);
    }else {
        printf("i. %d \n",a);
        printf("ii. %d \n",b);
        printf("iii. %d = %d \n",a,b);
    }

    return 0;
}
