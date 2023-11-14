#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b, c;
    int diszkriminans;
    double x1, x2;
    printf("\nKerem a masodfoku egyenlet konstansait, a,b,c sorrendben: ");
    scanf("%d, %d, %d", &a,&b,&c);
    diszkriminans = pow(b,2)-4*a*c;
    if (diszkriminans < 0)
    {
        printf("\nAz egyenletnek nincs valos megoldasa!");
        return 0;
    }
    else
    {
        printf("\nAz egyenletek van megoldasa!");
        x1 = ((double)-b + sqrt((double) diszkriminans))/2*(double)a;
        x2 = ((double)-b - sqrt((double) diszkriminans))/2*(double)a;
        printf("\nAz x1 erteke %lf", x1);
        printf("\nAz x2 erteke %lf", x2);
    }
    
    
    return 0;
}