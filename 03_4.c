#include <stdio.h>

int main()
{
    int napindul, naptavol, naperkezik;
    printf("\nAdjon meg egy szamot 1 es 7 kozott, hogy melyik napon indul: ");
    scanf("%d", &napindul);
    printf("\nAdja meg hogy mennyi napig lesz tavol: ");
    scanf("%d", &naptavol);
    if ((napindul+naptavol)%7 == 0)
    {
        naperkezik = 7;
    }
    else
    {
        naperkezik = (napindul+naptavol)%7;
    }
         
    switch (naperkezik)
    {
    case (1):
        printf("\nHetfon");
        break;
    case (2):
        printf("\nKedden");
        break;
    case (3):
        printf("\nSzerdan");
        break;
    case (4):
        printf("\nCsutortokon");
        break;
    case (5):
        printf("\nPenteken");
        break;
    case (6):
        printf("\nSzombaton");
        break;
    case (7):
        printf("\nVasarnapon");
        break;
    default:
       // printf("A megadott ertek nem 1 es 7 kozotti szam!");
        break;
    }
    printf (" erkezik haza.");
    return 0;
}