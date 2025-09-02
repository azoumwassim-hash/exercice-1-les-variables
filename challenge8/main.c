#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a,b,c,mg;
   printf("entrer a b c :");
   scanf("%f%f%f" ,&a,&b,&c);
   mg=cbrt(a*b*c);
   printf("%f",mg );
    return 0;
}
