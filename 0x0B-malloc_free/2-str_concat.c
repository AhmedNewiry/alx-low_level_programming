#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat- copy of the string given as a parameter.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return- pointer to the first element if success and NULL if not
 */


char *str_concat(char *s1, char *s2)
{
int x;
int i;
int y;
char *cped = NULL;
if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
x = 0;
while (s1[x])
{
x++;
}
printf("%i",x);
i = 0;
while (s2[i])
{
i++;
}

cped = (char *)malloc((x + i + 1) * sizeof(char));
if (cped)
{
for (y = 0; y < x; y++)
{
cped[y] = s1[y];

}
y = 0;
for (y = 0; y < i; y++)
{
cped[x] = s2[y];
x++;
}
cped[x++] = '\0';

return (cped);
}

return (NULL);
}
