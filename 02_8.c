#include <stdio.h>

int main()
{
    int ora, orakesobb, ebreszto;
    printf("\nIrd be hogy mennyi az ido (csak az orat!): ");
    scanf("%d", &ora);
    printf("\nIrd be hogy hany oraval kesobb szolaljon meg az ebreszto: ");
    scanf("%d", &orakesobb);
    ebreszto = ora+orakesobb;
    if (ebreszto > 24)
    {
        ebreszto = ebreszto - ebreszto/24*24;
    }
    printf("\nAz ebreszto %d orakor fog megszolalni.", ebreszto);
    return 0;
}