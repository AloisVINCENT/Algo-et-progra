#include <stdio.h>
#include <stdlib.h>
    
int main()
{
    int a,b;
    printf("Entrez deux nombres\n");
    scanf("%i%i", &a, &b);
    printf("Le nombre le plus petit est : %i\n", min(a,b));
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}