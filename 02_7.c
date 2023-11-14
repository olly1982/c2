#include <stdio.h>

int main()
{
    int szam;
    printf("\nKerlek irj be egy szamot: ");
    scanf("%d", &szam);
    if (szam%2 == 0)
    {
       printf("A beirt szam paros szam!");
    }
    else
    {
        printf("A beirt szam paratlan!");
    }
    return 0;
}