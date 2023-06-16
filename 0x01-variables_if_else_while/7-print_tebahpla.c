#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;
for (d = 'z'; d >= 'a'; d--)
putchar(d);
putchar('\n');
return (0);
}
