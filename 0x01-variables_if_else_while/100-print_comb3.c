#include <stdio.h>
/**
 * main -  a program that prints all possible different combinations of two num
 * Return: Always 10
 */

int main(void)
{
	int n, m;

	for (n = 48; n <= 51; n++)
	{
		for (m = 48; m <= 51; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 51 || m != 51)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
