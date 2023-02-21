#include "main.h"

/**
 * _islower - Checks for lower case characters
 * @c: The character to be checked
 * Return: 1 for lower case characteror 0 for anything else
 */

int _islower(int c)
{
        for (c >= 97 && c <= 122)
        {
                return (1);
        }
        return (0);
}
