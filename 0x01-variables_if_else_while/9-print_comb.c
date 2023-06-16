#include <stdio.h>
/**
 * main - a program that prints all possible combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = '0';
while (a <= '9')
{
putchar(a);
if (a != '9')
{
putchar(',');
putchar(' ');
}
++a;
}
putchar('\n');
return (0);
}
