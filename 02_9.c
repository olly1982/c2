#include <stdio.h>

int main()
{
    int s, m, h;
    printf("\nKerem irja be a masodperceket: ");
    scanf("%d", &s);
    h = s/3600;
    m = (s-h*3600)/60;
    s = s-h*3600-m*60;
    printf("\nA beirt ido %d ora %d perc %d masodperc", h,m,s);
    return 0;
}