#include "main.h"
/**
 *print_alphabet- print all English alphabets
 */
void print_alphabet(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
