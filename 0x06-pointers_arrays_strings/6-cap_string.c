#include "holberton.h"

/**
* cap_string - capitalizes all words of a string.
* @str: string to be capitalized.
* Return: A pointer to a changeg string.
*/

char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
else if (
str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||

i == 0)
}
str[i] = str[i] - 32;
}
++i;
}
return (str);
}
}
