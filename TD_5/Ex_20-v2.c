#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int length_str(char string[124])
{
    int length = 0;
    for (int i = 0; i < 1000; i++)
    // loop for the number of characters in the string
    {
        if (string[i] == '\0')
        // if the current character is the end of the string
        {
            break;
        }
        length++;
    }
    return length;
}

char reverse_str(char *string)
{
    int length = length_str(string);
    char temp;
    for (int i = 0; i < length / 2; i++)
    {
        // Copy the first character to a temporary variable
        temp = string[i];
        // Copy the last character to the first character
        string[i] = string[length - i - 1];
        // Copy the temporary variable to the last character
        string[length - i - 1] = temp;
    }
    return *string;
}

bool palindrome(char *string)
{
    int length = length_str(string);
    for (int i = 0; i <= length; i++)
    {
        if (string[i] != reverse_str(string[i]))
        {
            return false;
        }
        return true;
    }
}

int main()
{
    char string[124];
    printf("Enter a string: ");
    scanf("%s", string);
    printf("The length of the string is %d.\n", length_str(string));
    printf("The reversed string is %s.\n", reverse_str(string));
    printf("The string is %s\n", palindrome ? "a palindrome" : "not a palindrome");
}