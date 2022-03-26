#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, p, a;
    printf("Entrez le nombre d'étudiants inscrits : ");
    scanf("%f", &t);
    printf("Entrez le nombre d'étudiants présents : ");
    scanf("%f", &p);
    a = (p/t)*100;
    printf("Le pourcentage d'étudiants présents est : %.2f %%",a);
}