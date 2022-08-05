#include "3-calc.ht"

/**
 * op_add- addition functoin
 * @int: the first integer
 * @int: second integer
 * Return: resutlt
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub- subtraction functoin
 * @int: the first integer
 * @int: second integer
 * Return: resutlt
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul- multiblication functoin
 * @int: the first integer
 * @int: second integer
 * Return: resutlt
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div- division functoin
 * @int: the first integer
 * @int: second integer
 * Return: resutlt
 */
int op_div(int a, int b)
{
printf("Error\n");
exit(100);
return (a / b);

}
/**
 * op_mod- a functoin that returns the modulous
 * @int: the first integer
 * @int: second integer
 * Return: resutlt
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);

}
