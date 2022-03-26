#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, x1, x2, x3, x4, x5, x6;
    printf("Entrez un entier : \n");
    scanf("%i", &a);
    x1 = a << 1;
    // a << 1  ajoute une puissance de 2 
    x2 = a >> 1;
    // a >> 1 enlève une puissance de 2  
    x3 = a << 2;
    // a << 2 ajoute 2 puissances de 2 
    x4 = a >> 2;
    // a >> 2 enlève 2 puissances de 2  
    x5 = a & 1;
    // 
    x6 = a & 3;
    // 

    printf("Le premier opérateur bitwise donne : %i\n", x1);
    printf("Le deuxième opérateur bitwise donne : %i\n", x2);
    printf("Le troisième opérateur bitwise donne : %i\n", x3);
    printf("Le quatrième opérateur bitwise donne : %i\n", x4);
    printf("Le cinquième opérateur bitwise donne : %i\n", x5);
    printf("Le dernier opérateur bitwise donne : %i\n", x6);
}