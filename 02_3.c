#include <stdio.h>

int main ()
{
   int x = 2, y = 5;
   int result1, result2;

   result1 = (x++)+y*(--y)/(++x);
   result2 = (x++)+y*(y--)/(++x);
   printf("\nResult1: %d \nResult2: %d", result1, result2);

   return 0;

}