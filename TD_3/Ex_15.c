#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int sum(int n);
int sum_loop(int n);
int ask();

int sum(int n)
{
    int result;
    //On utilise la formule de l'ex 8
    result = n * (n + 1) / 2;
    return result;
}

int sum_loop(int n)
{
    int x = 0;
    int result = 0;
    while (x < n)
    {
        // On incrémente x
        x += 1;
        // On ajoute x au résultat précédent
        result = result + x;
    }
    return result;
}

int sum_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    return sum_rec(n-1) + n;
}

int ask()
{
    int a;
    printf("Entrez un nombre entre 0 et 100 : ");
    scanf("%i", &a);
    // On vérifie que le nombre est compris entre 0 et 100
    while (a < 0 || a >= 100)
    {
        printf("Entrez un nombre correct entre 0 et 100 : ");
        scanf("%i", &a);
    }
    return a;
}

int main()
{
    int a;
    int b;
    int c;
    a = ask();
    b = sum(a);
    printf("La somme est égale à : %i\n", b);
    c = sum_loop(a);
    printf("La somme est égale à : %i\n", c);

    printf("La somme est égale à : %i\n", sum_rec(a));

}