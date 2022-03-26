#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

void carre();
void carre1();
void carre2();
void carre3();
void carre4();
int n;

void carre(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void carre1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//print a number of stars without the diagonal line 
void carre2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    carre(n);
    printf("\n");
    carre1(n);
    printf("\n");
    carre2(n);
    printf("\n");
    // carre3(n);
    // printf("\n");
    // carre4(n);
    // printf("\n");
    return 0;
}
