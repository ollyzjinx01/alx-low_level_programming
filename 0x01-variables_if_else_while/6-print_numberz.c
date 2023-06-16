#include <stdio.h>
/**
 * main - a program that prints all single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
