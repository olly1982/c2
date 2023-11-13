#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double a, b;
    double c;
    printf("\nAdd meg a haromszog 2 befogojanak a meretet: ");
    scanf("%lf, %lf", &a, &b);
    //a =pow(a,2);
    //b =pow(b,2);
    c =sqrt(pow(a,2) + pow(b,2));
    printf("\nA haromszog atfogoja: %lf", c);
    return 0;
}