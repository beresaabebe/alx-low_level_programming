#include <stdio.h>
/**
 * main - starting point of every thing
 * Return: return success value
 */
int main(void)
{
	int n, res;

	for (n = 0; n < 1024; n++)
		if (n % 5 == 0 || n % 3 == 0)
			res += n;
	printf("%d\n", res);
	return (0);
}
