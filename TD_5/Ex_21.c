#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int length(char *str)
{
    int i = 0;
    while (str++)
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    char *pstr = NULL;
    printf("Enter a string \n");
    scanf("%s", pstr);
    printf("the length of the string is %i.", length(pstr));
    return 0;
}