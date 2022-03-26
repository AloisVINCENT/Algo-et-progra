#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int rdm;
int ans;

int ask()
{
    printf("Entrez un entier entre 1 et 100\n");
    scanf("%i", &ans);
    if (ans < 0 || ans > 100)
    {
        ask();
    }
    return ans;
}

void game(int ans, int rdm)
{
    ans = ask();

    if (ans > rdm)
    {
        printf("Plus petit\n");
        game(ans, rdm);
    }
    else if (ans < rdm)
    {
        printf("Plus grand\n");
        game(ans, rdm);
    }
    else
    {
        printf("Gagné\n");
    }
}

void main()
{
    srand((unsigned int)time(NULL));
    rdm = random() % 100;
    game(ans, rdm);
}