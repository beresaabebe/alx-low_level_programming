#include <stdio.h>
/**
 * main - everything starts here
 * Return: resturn some values
 */
int main(void)
{
	unsigned long count, i, j, k, sum = 0;

	i = 0;
	j = 1;

	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu ", sum); 
	return (0);
}
