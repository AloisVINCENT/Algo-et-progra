#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int fibo(unsigned int n);

void main()
{
    time_t start, end;
    double dif;
    unsigned int a;

    printf("Entrez un entier n : ");
    scanf("%u", &a);
    // Début du timer après avoir entré le nombre à calculer
    time(&start);
    printf("\nLe %uème nombre de fibonacci est : %u\n", a, fibo(a));
    // Fin du timer
    time(&end);
    // Calcul du temps d'exécution
    dif = difftime(end, start);
    printf("Done in %.2lf seconds.\n", dif);
}

unsigned int fibo(unsigned int n)
{
    // Initialisation des variables
    unsigned int temp1;
    unsigned int temp2;
    unsigned int result;
    unsigned int count = 2;

    // Si n est égal à 1 ou 2, on retourne 1, si n est égal à 0, on retourne 0
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    // Sinon, on calcule le nombre de fibonnaci en additionnant les variables temporaires
    // et on incrémente le compteur jusqu'à ce que le compteur soit égal à n
    else
    {
        // On commence à n = 2 car on a déjà calculé les 2 premiers nombres de fibonacci
        
        temp1 = 0;
        temp2 = 1;
        while (count <= n)
        {
            result = temp1 + temp2;
            temp1 = temp2;
            temp2 = result;
            count++;
        }
        return result;
    }
}
