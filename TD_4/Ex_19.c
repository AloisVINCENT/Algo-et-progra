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

void carre(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// prints a number of stars without the diagonal line
void carre1(int n)
{
    for (int i = 0; i < n; i++)
    // loop for the number of rows
    {
        for (int j = 0; j < n; j++)
        // loop for the number of columns
        {
            if (j == n - i - 1)
            // if the column is equal to the number of rows minus the number of columns minus the current row
            {
                printf("  ");
                // print a space
            }
            else
            {
                printf("* ");
                // print a star
            }
        }
        printf("\n");
    }
}

// prints a number of stars without the other diagonal line
void carre2(int n)
{
    for (int i = 0; i < n; i++)
    // loop for the number of rows
    {
        for (int j = 0; j < n; j++)
        // loop for the number of columns
        {
            if (j == i)
            // if the column is equal to the current row
            {
                printf("  ");
                // print a space
            }
            else
            {
                printf("* ");
                // print a star
            }
        }
        printf("\n");
    }
}

// prints a triangle of stars
void carre3(int n)
{
    for (int i = 0; i < n; i++)
    // loop for the number of rows
    {
        for (int j = 0; j < n; j++)
        // loop for the number of columns
        {
            if (j <= i)
            // if the column is less than or equal to the current row
            {
                printf("* ");
                // print a star
            }
            else
            {
                printf("  ");
                // print a space
            }
        }
        printf("\n");
    }
}

// prints the opposite triangle of stars
void carre4(int n)
{
    for (int i = 0; i < n; i++)
    // loop for the number of rows
    {
        for (int j = 0; j < n; j++)
        // loop for the number of columns
        {
            if (j >= n - i - 1)
            // if the column is greater than or equal to the number of rows minus the number of columns minus the current row
            //(because the triangle is upside down)
            {
                printf("* ");
                // print a star
            }
            else
            {
                printf("  ");
                // print a space
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
    carre3(n);
    printf("\n");
    carre4(n);
    printf("\n");
    return 0;
}
