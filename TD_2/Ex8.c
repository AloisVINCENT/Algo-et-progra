#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    int b;
    printf("Entrez un nombre : ");
    scanf("%i",&a);
    b = sum(a);
    printf("La somme est égale à : %i\n", b);
}

int sum(int n)
{
    int result;
    result = n * (n+1)/2;
    return result;
}