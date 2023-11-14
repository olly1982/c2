#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\nKerem a harom oldal mereteit: ");
    scanf("%d, %d, %d", &a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("\nA megadott ertekek lehetnek egy haromszognek az oldalai");
    }
    else
    {
        printf("\nA megadott ertekek nem lehetnek egy haromszog oldalai!");
    }
    return 0;
}