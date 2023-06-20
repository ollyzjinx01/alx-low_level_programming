#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 * @n: The character to be checked
 * Return: 1 and prints + num or 0 and prints 0 if n zro or -1 and prints - num
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
