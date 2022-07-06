#include <stdio.h>
/**
 * main - everything goes from here 
 * Return: return success value
 */
int main(void)
{
	unsigned long count, i, j, k, m, n, p, carry;

	i = 0;
	j = 1;

	for (count = 0; count <= 98; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		m = n;
		n = p;
		i = j;
		j = k;
		if ( p>= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu%lu", k, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}	
