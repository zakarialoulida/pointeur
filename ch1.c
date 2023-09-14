#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[50];
    char Prenom[50];
    int age,numdetelephone;
    char sexe[50];

    printf("Entrer vos informations personnelles:\n ");
    printf("Entrer votre nom: \n");
    scanf("%s",&Nom);
    printf("Entrer votre pr�nom: \n");
    scanf("%s",&Prenom);
    printf("Entrer votre sexe: \n");
    scanf("%s",&sexe);
    printf("Entrer votre age: \n");
    scanf("%d  ",&age);
    printf("Entrer votre numero de telephone: \n");
    scanf("%d",&numdetelephone);


    return 0;
}
