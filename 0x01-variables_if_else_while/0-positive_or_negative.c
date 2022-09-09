#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* headers go here */
/*betty style doc for function main goes here */
/**
 * main - Entry point
 * Description: prints random number and states if it is positive or neg
 * Return: always zero for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
