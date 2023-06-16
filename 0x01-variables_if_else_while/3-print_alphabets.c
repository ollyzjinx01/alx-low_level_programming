#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercae & upper
 * Return: Always 0 (Success)
 */
int main(void)
{
char p;
char q;
p = 'a';
q = 'A';
while
(p <= 'z') {
putchar(p);
p++;
}
while
(q <= 'Z') {
putchar (q);
q++;
}
putchar('\n');
return (0);
}
