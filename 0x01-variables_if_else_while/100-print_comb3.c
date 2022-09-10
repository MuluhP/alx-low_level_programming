#include <stdio.h>
/**
 * main -  a program that prints all possible different combinations of two num
 * Return: Always 10
 */

int main(void)
{
	int n, m;

	for (n = 38; n <= 46; n++)
	{
		for (m = 39; m <= 47; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 46 || m != 47)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
