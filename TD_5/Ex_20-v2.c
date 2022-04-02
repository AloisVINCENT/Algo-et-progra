#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int length_str(char *string)
{
    int length = 0;
    while (string[length] != '\0')
    {
        length++;
    }
    return length;
}

char *reverse_str(char *string)
{
    int length = length_str(string);
    char *result = malloc((length_str(string) + 1) * sizeof(char));
    char temp;
    for (int i = 0; i < length; i++)
    {
        // Copy the first character to a temporary variable
        temp = string[i];
        // Copy the last character to the first character
        result[i] = string[length - i - 1];
        // Copy the temporary variable to the last character
        result[length - i - 1] = temp;
    }
    return result;
}

bool palindrome(char *string)
{
    int length = length_str(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool palindrome2(char *str1, char *str2)
{
    if (length_str(str1) != length_str(str2))
    {
        return false;
    }
    int length = length_str(str1);
    for (int i = 0; i < length; i++)
    {
        if (str1[i] != str2[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char string1[100];
    char *pstring1 = string1;
    char string2[100];
    char *pstring2 = string2;
    printf("Enter 2 strings: ");
    scanf("%s", pstring1);
    scanf("%s", pstring2);
    printf("The length of the string is %d.\n", length_str(pstring1));
    printf("The reversed string is %s.\n", reverse_str(pstring1));
    printf("The string is %s\n", palindrome(pstring1) ? "a palindrome" : "not a palindrome");
    printf("The two strings are %s\n", palindrome2(pstring1, pstring2) ? "palindromes" : "not palindromes");
}