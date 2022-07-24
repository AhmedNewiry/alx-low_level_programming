#include "main.h"
/**
 * _strlen_recursion- a function that counts the length of the string
 * @s: the pointer to the first character of the string
 * Return: the length of the string, 0 if none
 */


int _strlen_recursion(char *s)
{

if (*s)
{


return(1 + _strlen_recursion(s + 1));

}
return (0);
}

