#include <unistd.h>
/**
 * main - a C program that prints a new line to the standard error
 * Return 1 (Success)
 */
int main()
{
char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 57);
return 1;
}