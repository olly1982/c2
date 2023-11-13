#include <stdio.h>

int main()
{
    int eint;
    float efl;
    //a) feladat
    eint = (6*2/3+5/2-7*3%2);
    printf("\nInt ben tarolva az ertek: %d", eint);

    //b) feladat
    efl = (6*2/3+5/2-7*3%2);
    printf("\nFloat-ban tarolva az ertek: %lf", efl);

    //c) feladat
    double edouble;
    edouble = ((double)6*(double)2/(double)3+(double)5/(double)2-7*3%2);
    printf("\nDouble-ban tarolva az ertek: %.3lf", edouble);

    //d) először a magasabb operátorok (*,/,%), után az alacsonabb rendűek (+,-)

    //Hf
    int hf;
    hf = 6*2/(3+5)/2-7*3%2;
    printf("\nA Hf erteke: %d", hf);

    return 0;
}