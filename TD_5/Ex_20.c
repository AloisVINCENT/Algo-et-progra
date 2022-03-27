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

int main()
{
    char string[1000];
    // array of characters to store the string
    printf("Enter a string: \n");
    scanf(" %s", &string);
    printf("The length of the string is: %d\n", length_string(string));
    printf("The reverse of the string is: %s\n", reverse_string(string));
}