#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int n;
	char word;

	for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');

	for (word = 'a'; word <= 'f'; word++)
	putchar(word);

	{
	putchar('\n');
	}

	return (0);
}
