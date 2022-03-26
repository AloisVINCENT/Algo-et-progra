#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int fibo(unsigned int n);

int main()
{
    time_t start, end;
    double dif;

    time(&start);
    unsigned int a;
    printf("Entrez un entier n : ");
    scanf("%u", &a);
    printf("\nLe %uème nombre de fibonacci est : %u\n", a, fibo(a));
    time(&end);
    dif = difftime(end, start);
    printf("Done in %.2lf seconds.\n", dif);
}

unsigned int fibo(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        printf("Appel de la fonction\n");
        return fibo(n - 1) + fibo(n - 2);
    }
}