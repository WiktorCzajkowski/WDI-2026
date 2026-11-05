#include <stdio.h>
#include <stdlib.h>

int main() {

    int mies;
    for(;;)
    {
        printf("Wybierz numer miesiaca(1-12): ");
        fflush(stdin);
        scanf(" %d",&mies);
        switch(mies)
        {
            case 1:
            case 2:
            case 3:
            {
                printf("Pierwszy kwartal \n");
            }break;
            case 4:
            case 5:
            case 6:
            {
                printf("Drugi kwartal \n");
            }break;
            case 7:
            case 8:
            case 9:
            {
                printf("Trzeci kwartal \n");
            }break;
            case 10:
            case 11:
            case 12:
            {
                printf("Czwarty kwartal \n");
            }break;
            default:
            {
                printf("Nie ma takiego miesiaca\n");
            }break;
        }
    }

    return 0;
}

