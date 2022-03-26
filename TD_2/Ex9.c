#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, c1, c2;
    printf("Entrez trois nombres :\n");
    scanf("%f%f%f", &a, &b, &c);
    c1 = a + b / c;
    c2 = (a + b) / c;
    printf("Le résultat sans parenthèses est : %f\n", c1);
    printf("Le résultat avec parenthèses est : %f\n", c2);
}