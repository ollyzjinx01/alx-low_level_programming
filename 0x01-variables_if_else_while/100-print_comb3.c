#include <stdio.h>
/**
 * main - a program that prints all possible different combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
int combination = 1;
while (combination <= 89)
{
int firstDigit = combination / 10;
int secondDigit = combination % 10;
putchar(firstDigit + '0');
putchar(secondDigit + '0');
if (combination != 89)
{
putchar(',');
putchar(' ');
}
if (secondDigit != 9)
{
combination++;
}
else
{
combination += (firstDigit + 2);
}
}
putchar('\n');
return (0);
}
