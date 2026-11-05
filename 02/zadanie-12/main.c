#include <stdio.h>
#include <stdlib.h>

void dodawanie();
void odejmowanie();
void mnozenie();
void dzielenie();
void potega();
void kwadrat();
void silnia();


int main() {
    int wybor;

    for (;;) {
        printf("\n=====KALKULATOR=====\n");
        printf("1. Dodawanie n liczb\n");
        printf("2. Odejmowanie\n");
        printf("3. Mnozenie dwoch liczb\n");
        printf("4. Dzielenie\n");
        printf("5. Potegowanie\n");
        printf("6. Kwadrat liczby\n");
        printf("7. Silnia\n");
        printf("8. Wyjscie\n");

        printf("Wybierz operacje: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1: {
                dodawanie();
            }break;

            case 2: {
                odejmowanie();
            }break;

            case 3: {
                mnozenie();
            }break;

            case 4: {
                dzielenie();
            }break;

            case 5: {
                potega();
            }break;

            case 6: {
                kwadrat();
            }break;

            case 7:{
                silnia();
            }break;

            case 8: {
                return 0;
            }break;

            default: {
                printf("Niepoprawny wybor!\n");
            }

        }
    }
}

void dodawanie() {
    int i,liczba,n,wynik=0;
    printf("Podaj ile liczb chcesz dodac: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        printf("Podaj %d liczbe do dodania: ",i);
        scanf("%d", &liczba);
        wynik+=liczba;
    }
    printf("Suma liczb: %d \n", wynik);
}
void odejmowanie() {
    int odejmowana,liczba,i;
    printf("Podaj od jakiej liczby chcesz odejmowac: ");
    scanf("%d", &liczba);
    do {
        printf("Podaj liczbe do odjecia od %d (0 konczy odejmowanie): ",liczba);
        scanf("%d", &odejmowana);
        liczba-=odejmowana;
    } while (odejmowana!=0);
    printf("Wynik odejmowania: %d \n", liczba);
}
void mnozenie() {
    int a,b;
    printf("Podaj 1 liczbe do pomnozenia: ");
    scanf("%d", &a);
    printf("Podaj 2 liczbe do pomnozenia: ");
    scanf("%d", &b);
    printf("Wynik mnozenia liczb: %d \n", a*b);
}
void dzielenie() {
    float a,b;
    printf("Podaj dzielna: ");
    scanf("%f", &a);
    printf("Podaj dzielnik: ");
    scanf("%f", &b);
    if (b==0) {
        printf("Niepoprawny dzielnik\n");

    }else {
        printf("Wynik dzielenia liczb: %.2f \n", a/b);
    }

}
void potega() {
    int a,b,i,wynik;
    printf("Podaj liczbe do potegi: ");
    scanf("%d", &a);
    printf("Podaj wykladnik potegi: ");
    scanf("%d", &b);
    wynik=a;
    if (b==0) {
        wynik=1;
        printf("Wynik potegi: %d \n", wynik);
    }
    else if (b<0) {
        printf("Podaj dodatni wykladnik\n");
    }
    else {
        for (i=1; i<b; i++) {
        wynik*=a;
        }
        printf("Wynik potegi: %d \n", wynik);
    }
}
void kwadrat() {
    int liczba;
    printf("Podaj liczbe do kwadratu: ");
    scanf("%d", &liczba);
    printf("Liczba %d do kwadratu: %d \n", liczba, liczba*liczba);
}
void silnia() {
    int a,wynik=1,i;

    printf("Podaj liczbe: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Silnia nie jest okreslona dla liczb ujemnych\n");
    } else {
        for (i=1; i<=a; i++) {
            wynik*=i;
        }
        printf("Silnia: %d\n", wynik);
    }
}

