#include <stdio.h>

/**
 * main -everything goes from here
 * Return: always return true
 */
int main(void)
{
	int c, n, m;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (c < n && n < m)
				{
					putchar(c);
					putchar(n);
					putchar(m);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
