#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char val;

	for (val = 'z'; val >= 'a'; val--)
	{
		putchar(val);
	}
	putchar('\n');
	return (0);
}
