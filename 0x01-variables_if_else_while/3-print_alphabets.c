0;136;0c#include<stdio.h>

/**
 * main - Alphabet in lowercase, and then in uppercase
 *
 *Return: (0)
 */

int main(void)

char ch;
char CH;
for (ch = 'a' ; ch <= 'z' ;ch++)
{
putchar(ch);
}
for (CH = 'A' ; CH <= 'Z' ; CH++)
{
putchar(CH);
}
putchar ('\n');
return (0);
