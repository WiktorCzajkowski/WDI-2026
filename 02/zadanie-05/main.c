#include <stdio.h>
#include <stdlib.h>

int main() {

    char wybor = ' ';
    char t1[] = "czcic Krola, ";
    char t2[] = "wchodzic na dziedziniec zamkowy codziennie, ";
    char t3[] = "moze wchodzic do zamku codziennie oraz rekrutowac giermkow, ";
    char t4[] = "rozmawiac z Krolem, ";
    char t5[] = "rozkazywac Krolowi. ";
    for(;;)
    {
        printf("Wybierz klase spoleczna: ");
        fflush(stdin);
        scanf(" %c",&wybor);
        switch(wybor)
        {
            case 'P':
            {
                printf("Poddany moze: %s \n",t1);
            }break;
            case 'G':
            {
                printf("Giermek moze: %s%s \n",t1,t2);
            }break;
            case 'R':
            {
                printf("Rycerz moze: %s%s%s \n",t1,t2,t3);
            }break;
            case 'M':
            {
                printf("Mag moze: %s%s%s%s \n",t1,t2,t3,t4);
            }break;
            case 'K':
            {
                printf("Krolowa moze: %s%s%s%s%s\n",t1,t2,t3,t4,t5);
            }break;
            default:
            {
                printf("Nie ma takiej opcji\n");
            }break;
        }
    }

    return 0;
}

