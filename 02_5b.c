#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double ks;
    double kt;
    double kk;
    printf("\nKerem a kor sugarat: ");
    scanf("%lf", &ks);
    kk = 2*ks*M_PI;
    kt = ks*ks*M_PI;
    printf("\nA kor kerulete: %lf", kk);
    printf("\nA kor terulete: %lf", kt);
    return 0;
}