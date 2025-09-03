#include <stdio.h>
#include <stdlib.h>

int main()
{
        char nom[20];
    char prenom[20];
    int age;
    char sexe;
    char email[30];

    printf("Entrer le nom: ");
    scanf("%19s", nom);  // Limite à 19 caractères + '\0'

    printf("Entrer le prenom: ");
    scanf("%19s", prenom);

    printf("Entrer l'age: ");
    scanf("%d", &age);

    printf("Entrer le sexe (M/F): ");
    scanf(" %c", &sexe);  // Espace avant %c pour ignorer les blancs

    printf("Entrer l'email: ");
    scanf("%29s", email);




    return 0;

}

