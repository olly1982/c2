#include <stdio.h>

int main()
{
    int pontszam;
    printf("\nIrj egy pontszamot 0 es 100 kozott: ");
    scanf ("%d", &pontszam);
    if (pontszam >= 0 && pontszam <= 60 )
    {
        printf ("\nelegtelen");
    }
    else if (pontszam > 60 && pontszam <= 70)
    {
        printf("\nelegseges");
    }
    else if (pontszam > 70 && pontszam <= 80)
    {
        printf("\nkozepes");
    }
    else if (pontszam > 80 && pontszam <= 90)
    {
        printf("\njo");
    }
    else if (pontszam > 90 && pontszam <= 100)
    {
        printf("\njeles");
    }
    return 0;
}