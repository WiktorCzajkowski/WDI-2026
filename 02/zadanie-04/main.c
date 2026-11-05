
#include <stdio.h>

int main() {

    int wybor, a = 0, b = 0;
    char dzialanie = ' ';
    float wynik;

    int podanoA = 0, podanoB = 0;

    for (;;) {

        printf("----------------------------\n");

        if (podanoA && podanoB) {

            printf("Liczby: %d i %d\n", a, b);
            printf("Dzialanie: %c\n", dzialanie);

            switch (dzialanie) {

                case '+':
                {
                    wynik = a + b;
                    printf("Wynik: %.2f\n", wynik);
                }break;

                case '-':
                {
                    wynik = a - b;
                    printf("Wynik: %.2f\n", wynik);
                }break;

                case '*':
                {
                    wynik = a * b;
                    printf("Wynik: %.2f\n", wynik);
                }break;

                case '/':
                {
                    if (b == 0) {
                        printf("Nie mozna dzielic przez zero.\n");
                    } else {
                        wynik = (float)a / (float)b;
                        printf("Wynik: %.2f\n", wynik);
                    }
                }break;

                case '%':
                {
                    if (b == 0) {
                        printf("Nie mozna dzielic przez zero.\n");
                    } else {
                        printf("Wynik: %d\n", a % b);
                    }
                }break;
                default:
                {
                    printf("Nie wybrano znaku dzialania\n");
                }break;
            }

        } else {
            printf("Podaj najpierw obie liczby.\n");
        }

        // Menu
        printf("\n---------- MENU ----------\n");
        printf("1. Zmien pierwsza liczbe.\n");
        printf("2. Zmien druga liczbe.\n");
        printf("3. Wybierz dzialanie (+, -, *, /, %%).\n");
        printf("4. Zakoncz program.\n");
        printf("----------------------------\n");

        printf("Wybierz opcje: ");
        scanf("%d", &wybor);

        switch (wybor) {

            case 1:
            {
                printf("Podaj pierwsza liczbe: ");
                scanf("%d", &a);
                podanoA = 1;
            }break;

            case 2:
            {
                printf("Podaj druga liczbe: ");
                scanf("%d", &b);
                podanoB = 1;
            }break;

            case 3:
            {
                printf("Podaj znak dzialania: ");
                scanf(" %c", &dzialanie);

                if (dzialanie != '+' && dzialanie != '-' && dzialanie != '*' && dzialanie != '/' && dzialanie != '%') {

                    printf("Niepoprawny znak dzialania\n");
                    }
            }break;

            case 4:
            {
                return 0;
            }break;

            default:
            {
                printf("Nie ma takiej opcji\n");
            }break;
        }
    }

    return 0;
}
