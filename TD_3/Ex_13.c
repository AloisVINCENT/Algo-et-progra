#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Entrez un entier : ");
    scanf("%i", &n);
    printf("\n%i factorielle = %i\n",n,fact(n));
}

int fact(int n)
{
    int a = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            a = a * i;
        }
        return a;
    }
}