#include <stdio.h>
#include <stdlib.h>

int result = 1;
int i = 1;

int main()
{
    int n;
    printf("Entrez un nombre\n");
    scanf("%i", &n);
    printf("%i",factorielle(n));
}

int factorielle(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1){
        return 1;
    }
    return n*factorielle(n-1);
}