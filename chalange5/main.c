#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c,moyenne;
   printf("entrer les 3 nombres:");
   scanf("%f%f%f",&a,&b,&c );
   moyenne=(a*2 + b*3 +c*5)/(2+3+5);
   printf("%f" , moyenne );


    return 0;
}
