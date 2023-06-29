#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *infinite_add - a function that adds two numbers
 * @n1: number to add
 * @n2: numer to add
 * @size_r: ....
 * @r: .....
 * Return: Nothingg
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
if (len1 + len2 >= size_r)
return (0);
int i = len1 - 1;
int j = len2 - 1;
int k = 0;
while ((i >= 0) || (j >= 0) || (carry > 0))
{
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
int digit = sum % 10;
r[k] = digit + '0';
i--;
j--;
k++;
}
for (int l = 0; l < k / 2; l++)
{
char temp = r[l];
r[l] = r[k - 1 - l];
r[k - 1 - l] = temp;
}
r[k] = '\0';
return (r);
}
