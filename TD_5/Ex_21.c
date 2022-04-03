#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int length(char *str)
{
    int i = 0;
    while (*str++)
    {
        i++;
    }
    return i;
}

char *mirror(char *str)
{
    int l = length(str);
    char *rts = malloc((l + 1) * sizeof(char));
    char *test = rts + l;
    *test-- = '\0';
    while (*str != '\0')
    {
        *test = *str;
        *str++;
        *test--;
    }
    return rts;
}

bool palindrome(char *str)
{
    for (int i = 0; i < length(str); i++)
    {
        if (*str != *mirror(str))
        {
            return false;
        }
    }
    return true;
}

bool palindrome2(char *str1, char *str2)
{
    if (length(str1) != length(str2))
    {
        return false;
    }
    else
    {
        for (int i = 0; i < length(str1); i++)
        {
            if (*str1 != *mirror(str2))
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    char str[100];
    char str2[100];
    char *pstr = str;
    char *pstr2 = str2;
    printf("Enter two strings \n");
    scanf("%s", str);
    scanf("%s", str2);
    printf("the length of the string is %i.\n", length(pstr));
    printf("the mirror of the string is %s.\n", mirror(pstr));
    printf("%s is a palindrome? %s.\n", pstr, palindrome(pstr) ? "true" : "false");
    printf("are %s and %s palindromes? %s.\n", pstr, pstr2, palindrome2(pstr, pstr2) ? "true" : "false");
    return 0;
}