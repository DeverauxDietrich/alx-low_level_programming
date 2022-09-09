#include <stdio.h>
#include <stdlib.h>
/* headers */

/**
 * main - Entry point
 *
 * Description: Get random number with statements
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
