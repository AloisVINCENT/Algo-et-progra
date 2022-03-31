#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int a = 1;
    // Factorielle de 0 = 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // On multiplie tous les nombres de 1 à n
        for (int i = 1; i <= n; i++)
        {
            a = a * i;
        }
        return a;
    }
}

void main()
{
    int n;
    printf("Entrez un entier : ");
    scanf("%i", &n);
    printf("\n%i factorielle = %i\n", n, fact(n));
}