#include <stdio.h>
/**
 * main - print various data type sizes
 * Description: prints various data type sizes to standard output
 * Return: always zero for success
 */
int main(void)
{
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	printf("Size of a long int: %d bytes(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", (int) sizeof(long long int));
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));

	return (0);
}
