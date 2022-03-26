#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int prime(int n)
{
    int compteur = 0;
    int idx = 2;
    int x = 2;
    while (compteur <= 100)
    // On compte le nombre de nombres premiers que l'on a calculés
    {
        for (int i = 2; i <= x; i++)
        // On essaie de diviser chaque nombre par tous les nombres entre 2 et lui-même
        {
            if (idx % i == 0 && i != idx)
            // Si le nombre est divisible par un autre nombre, il n'est pas premier
            {
                idx++;
                break;
            }
            else if (idx % i == 0 && idx == i)
            // Si le nombre est divisible par lui-même, il est premier
            {
                printf("Le nombre premier n°%i est %i\n", compteur, idx);
                idx++;
                compteur++;
            }
        }
        x++;
    }
    x = 2;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && i != n)
        // Si le nombre est divisible par un autre nombre, il n'est pas premier
        {
            printf("%i n'est pas premier", n);
            break;
        }
        else if (n % i == 0 && n == i)
        // Si le nombre est divisible par lui-même, il est premier
        {
            printf("%i est premier\n", n);
        }
    }

    return 0;
}

int main()
{
    int n;
    printf("Entrez un entier\n");
    scanf("%i", &n);
    prime(n);
}
