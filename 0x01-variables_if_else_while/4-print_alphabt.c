#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by new line except q and e
 * Return: Always 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);

	}

	}

	{
	putchar('\n');
	}

	return (0);
}
