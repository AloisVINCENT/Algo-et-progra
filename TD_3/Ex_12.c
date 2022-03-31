#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compteur = 0;

unsigned int fibo(unsigned int n)
{
    // Fibo(0) = 0
    if (n == 0)
    {
        return 0;
    }
    // Fibo(1) = 1
    else if (n == 1)
    {
        return 1;
    }
    // On calcule le nombre de fibonacci avec fibo(n-1) + fibo(n-2)
    // On va appeller la fonction en boucle pour obtenir le nombre correspondant
    else
    {
        // On fait un nouvel appel de fonction à chaque fois que l'on rentre dans le else
        printf("Appel de la fonction\n");
        compteur++;
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    // Déclaration des variables du timer
    time_t start, end;
    double dif;
    // Déclaration du nombre à calculer

    unsigned int a;
    printf("Entrez un entier : ");
    scanf("%u", &a);
    // Début du timer après avoir entré le nombre à calculer
    time(&start);
    // Calcul de la valeur de fibo pour a
    printf("\nLe %uème nombre de fibonacci est : %u\n", a, fibo(a));
    // Fin du timer
    time(&end);
    // Calcul du temps d'exécution
    dif = difftime(end, start);
    // Affichage du temps d'exécution et du nombre de fois que la fonction a été appelée
    printf("Fait en %.2lfs et %i appels de fonction.\n", dif, compteur);
}