#include "main.h"
/**
 * _abs - return the absolute value
 * Return: return the absolute value
 * @c:is the input
 */
int _abs(int c)
{
if (c > 0)
{
return (c);
}
else if (c == 0)
{
return (0);
}
c = c * -1;
return (c);
}
