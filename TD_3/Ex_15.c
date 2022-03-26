#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int sum(int n);
int sum_loop(int n);
int ask();

void main()
{
    int a;
    int b;
    int c;
    a = ask();
    b = sum(a);
    printf("La somme est égale à : %i\n", b);
    c = sum_loop(a);
    printf("La somme est égale à : %i\n", c);
}

int sum(int n)
{
    int result;
    result = n * (n + 1) / 2;
    return result;
}

int sum_loop(int n)
{
    int x = 0;
    int result = 0;
    while (x < n)
    {
        x += 1;
        result = result + x;
    }
    return result;
}

int ask()
{
    int a;
    printf("Entrez un nombre entre 0 et 100 : ");
    scanf("%i", &a);
    while (a < 0 || a > 100)
    {
        printf("Entrez un nombre correct entre 0 et 100 : ");
        scanf("%i", &a);
    }
    return a;
}