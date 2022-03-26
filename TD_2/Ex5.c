#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    float a, b, add, sub, mul, div;
    printf("Entrez deux nombres\n");
    scanf("%f%f", &a, &b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    assert(b != 0);
    div = a / b;
    printf("La division vaut : %f\n", div);
    printf("L'addition vaut : %f\n", add);
    printf("La soustraction vaut : %f\n", sub);
    printf("La multiplication vaut : %f\n", mul);
}