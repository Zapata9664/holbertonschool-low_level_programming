#include <stdio.h>

/**
 *main - Patience, persistence and perspiration
 *
 *Return: (0) alwyas
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
