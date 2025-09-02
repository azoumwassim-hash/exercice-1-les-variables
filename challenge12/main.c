#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer le nombre decimal:");
    scanf("%d",&n);
    printf("Hexadecimal : %x\n" ,n);
    printf("binaire :");
    for (int i=sizeof(int)*8-1; i >= 0 ; i--){

        int bit = (n>>i) & 1;
        printf("%d" , bit);

    }
    printf("\n");



    return 0;
}
