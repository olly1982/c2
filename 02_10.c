#include <stdio.h>
#include <math.h>

int main()
{
    double c = 10000;
    double r = 8;
    double m = 1;
    double t;
    double fv;
    double temp1;
    double temp2;
    printf("\nIrja be hogy hany evre koti le a betett penzet: ");
    scanf("%lf", &t);
    //temp1 = r/m;
    //temp2 = pow((1+r/m),(m*t));
    fv = c*(pow((1+r/m),(m*t)));
    printf("A futamido vegen %.2lf Ft tud kivenni a penzintezetbol!", fv);
    return 0;
}