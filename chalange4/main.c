#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;
    printf("entrer la temperature :");
    scanf("%f",&t);
    if(t<0)
        printf("solide");
    else if (0<=t && t<100)
        printf("liquide");
    else
        printf("gaz");


    return 0;
}
