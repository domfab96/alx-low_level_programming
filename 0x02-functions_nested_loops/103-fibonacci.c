#include <stdio.h>

/**
 * main - the main printing function
 * less than 4000000
 * Return: 0;
 */

int main(void)
{
	unsigned long long int z = 1, y = 2, x, sum = 0;

	while(y <= 4000000)
	{
	if (y % 2 == 0)
	{
	sum += y;
	}

	x = z + y;
	z = y;
	y = x;
	}
	
	printf("The sum of even-valued terms in the ibonacci sequence not exceeding 4,000,000 is: %llu\n", sum);

	return 0;
}
