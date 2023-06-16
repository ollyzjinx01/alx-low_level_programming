#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c == 'e' || c == 'q')
{
c += 1;
}
else
{
putchar(c);
c += 1;
}
}
putchar('\n');
return (0);
}
