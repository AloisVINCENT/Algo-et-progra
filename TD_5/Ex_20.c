#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int length_string(char *string)
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

// take a string and return the reverse of it
char *reverse_string(char *string)
{
    int length = length_string(string);
    // get the length of the string
    char *reverse = malloc(length * sizeof(char));
    // create a new string with the same length
    for (int i = 0; i < length; i++)
    // loop for the number of characters in the string
    {
        reverse[i] = string[length - i - 1];
        // set the current character to the reverse of the string
    }
    reverse[length] = '\0';
    // set the end of the string
    return reverse;
}

bool palindrome(char *string)
{
    char *reverse = reverse_string(string);
    // get the reverse of the string
    bool palindrome = true;
    // set the palindrome to true
    for (int i = 0; i < length_string(string); i++)
    // loop for the number of characters in the string
    {
        if (string[i] != reverse[i])
        // if the current character is not the same as the reverse
        {
            palindrome = false;
            // set the palindrome to false
            break;
        }
    }
    free(reverse);
    // free the reverse string
    return palindrome;
}

bool str_palindrome(char *string1, char *string2)
{
    if
}


int main()
{
    char string[1000];
    // array of characters to store the string
    printf("Enter a string: \n");
    scanf(" %s", &string);
    printf("The length of the string is: %d\n", length_string(string));
    printf("The reverse of the string is: %s\n", reverse_string(string));
    printf("Is the string a palindrome? %s\n", palindrome(string) ? "Yes" : "No");
}