#include <stdio.h>
/**
 * main - starting point
 * Return: return success value
 */
int main(void)
{
	int count, i = j =0, k;

	for (count = 0; count < 50; count++)
	{
		k = i+j;
		i = j;
		j = k;
		printf("%d", k);
		if (count == 49)
			printf('\n');
		else 
			printf(",");
	}
	return (0);
}
