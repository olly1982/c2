#include <stdio.h>

int main ()
{
int evszam;
printf("Irj be egy evszamot: ");
scanf("%d", &evszam);
if (evszam % 4 == 0 && (evszam % 100 > 0 || evszam % 400 == 0))
{
    printf("A(z) %d ev szokoev", evszam);
}
else
{
    printf("A(z) %d ev nem szokoev", evszam);
}
}