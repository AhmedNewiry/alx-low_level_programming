#include "main.h"
/**
 * factorial- a function that calcualtes the factorial of a number
 * @n: the number
 * Return: the factorial or -1 if negative
 */


int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n > 0)
{


return (n * factorial(n - 1));

}
return (-1);
}
