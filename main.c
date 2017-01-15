#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tension= 0, intensite= 0, resistance= 0, resultat= 0, saisie= 0;
    int v= 0, i= 0, r= 0;
    printf("****Bienvenue dans le calculateur du loi d'ohm***\n**Precision il faut 2 valeurs pour calculer**\n");
    printf("*Que voulez vous calculer???*\n");
    printf(" 1. V tension\n 2. I intensite\n 3. Ω resistance\n");
    scanf("%d", &saisie);
    if(saisie == 1){
    printf("entre la valeur de la resistance: ");
    scanf("%d", &r);
    printf("entre la valeur de l'intensite: ");
    scanf("%d", &i);
    resultat= r * i;
    printf("la tension est de %d volts\n",resultat);
    }
    else if (saisie == 2){
    printf("entre la valeur de la tension: ");
    scanf("%d", &v);
    printf("entre la valeur de la resistance: ");
    scanf("%d", &r);
    resultat= v / r;
    printf("l'intensite est de %d amperes\n",resultat);
    }
    else if (saisie == 3){
    printf("entre la valeur de la tension: ");
    scanf("%d", &v);
    printf("entre la valeur de l'intensite: ");
    scanf("%d", &i);
    resultat= v / i;
    printf("la resistance est de %d ohms\n",resultat);
    }


}
