#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int length_string(char string[])
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

int main()
{
    char string[256];
    printf("Enter a string: ");
    scanf("%s", string);
    printf("The length of the string is %d.\n", length_string(string));
}