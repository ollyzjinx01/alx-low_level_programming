#include "main.h"
/**
 * print_alphabet_x10 - to print 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char sh;
int i;
i = 0;
while (i < 10)
{
for (sh = 'a'; sh <= 'z'; sh++)
{
_putchar(sh);
}
_putchar('\n');
i++;
}
}
