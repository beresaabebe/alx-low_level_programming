#include <stdio.h>

/**
 * main - everything goes from here
 * Return: always return success
 */
int main(void)
{
	int c, k, n, m;

	for (c = 48; c <= 57; c++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (m = 48; m <= 57; m++)
				{
					if (((n + m) > (c + k) && n >= c) || c < n)
					{
						putchar(c);
						putchar(k);
						putchar(' ');
						putchar(n);
						putchar(m);

						if (c + k + n + m == 227 && c == 57)
						{
							break;
						}
						else 
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
