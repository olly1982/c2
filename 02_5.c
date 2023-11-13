#include <stdio.h>

int main()
{
    const double pi = 3.141593;
    double ks;
    double kt;
    double kk;
    printf("\nKerem a kor sugarat: ");
    scanf("%lf", &ks);
    kk = 2*ks*pi;
    kt = ks*ks*pi;
    printf("\nA kor kerulete: %lf", kk);
    printf("\nA kor terulete: %lf", kt);
    return 0;
}