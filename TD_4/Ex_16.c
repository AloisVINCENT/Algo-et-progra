#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int fibo(unsigned int n);

void main()
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
    unsigned int temp1;
    unsigned int temp2;
    unsigned int result;
    unsigned int count = 2;

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        temp1 = 1;
        temp2 = 1;
        while (count < n)
        {
            result = temp1 + temp2;
            temp1 = temp2;
            temp2 = result;
            count++;
        }
        return result;
    }
}
