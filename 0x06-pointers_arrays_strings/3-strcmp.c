#include "main.h"
/**
 * _strcmp- compares two stings
 * @s1: the pointer of the first string
 * @s2: the pointer  of the second string
 * Return: 0 if same, >0 if first is greater and <0 if second is greater
 */
int _strcmp(char *s1, char *s2)
{
int sum1 = 0;
int sum2 = 0;
while (s1[sum1])
{
sum1++;
}

while (s2[sum2])
{
sum2++;
}

if (sum1 == sum2)
{
return (0);
}
if (sum1 > sum2)
{
return (sum1);
}
if (sum1 < sum2)
{
return (-sum2);
}



}
