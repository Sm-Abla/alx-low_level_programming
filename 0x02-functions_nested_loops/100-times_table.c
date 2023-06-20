#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, v;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				v = j * i;
				if (j == 0)
				{
					_putchar(v + '0');
				} else if (v < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(v + '0');
				} else if (v >= 10 && v < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((v / 10) + '0');
					_putchar((v % 10) + '0');
				} else if (v >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((v / 100) + '0');
					_putchar(((v / 10) % 10) + '0');
					_putchar((v % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
