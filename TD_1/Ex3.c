#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name1st;
    printf("Quel est ton prénom ? ");
    scanf("%ms", &name1st);
    char *nameLast;
    printf("Quel est ton nom ? ");
    scanf("%ms", &nameLast);
    int age;
    printf("Quel âge as-tu ? ");
    scanf("%i", &age);
    printf("Bonjour, %s %s, tu as %i ans !", name1st, nameLast, age);
}