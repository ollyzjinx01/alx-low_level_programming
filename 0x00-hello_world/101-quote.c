#include <unistd.h>
/**
 * main - a C program that prints a new line to the standard error
 * Return 1 (Success)
 */
int main(void)
{
char *messge = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, messge, 57);
return (1);
}
