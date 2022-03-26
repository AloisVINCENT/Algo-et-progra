#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b,c;
    printf("Entrez deux nombres : \n");
    scanf("%i%i",&a,&b);
    c = cmp(a,b);
    printf("%i\n",c);
}

int cmp(int a, int b)
{
    if (a < b)
    {
        return -1;
    }
    else if (a > b)
    {
        return 1;
    }
    else{
        return 0;
    }
}