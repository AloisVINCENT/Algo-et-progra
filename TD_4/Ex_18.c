#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int pgcd(int a, int b)
{
  int x = a;
  int y = b;
  int t;
  if (a == b && a == 0)
  {
    return 0;
  }

  while (y != 0)
  {
    t = x;
    x = y;
    y = t % y;
  }
  return x;
}

int main()
{
  int a, b;
  printf("Entrez deux entiers\n");
  scanf("%i", &a);
  scanf("%i", &b);
  printf("Le plus grand diviseur commun est %i\n", pgcd(a, b));
}