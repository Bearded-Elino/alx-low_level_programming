#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v = 97;

	while (v <= 122)
	{
		putchar(v);
		v++;
	}
	putchar(v);
	return (0);
}
