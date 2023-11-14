#include <stdio.h>

int main()
{
    int nap;
    printf("\nAdjon meg egy szamot 1 es 7 kozott: ");
    scanf("%d", &nap);
    switch (nap)
    {
    case (1):
        printf("\nHetfo");
        break;
    case (2):
        printf("\nKedd");
        break;
    case (3):
        printf("\nSzerda");
        break;
    case (4):
        printf("\nCsutortok");
        break;
    case (5):
        printf("\nPentel");
        break;
    case (6):
        printf("\nSzombat");
        break;
    case (7):
        printf("\nVasarnap");
        break;
    default:
        printf("A megadott ertek nem 1 es 7 kozotti szam!");
        break;
    }
    return 0;
}