#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = 0; v <= 9; v++)
	{
		putchar(v + 48);
	}
	putchar('\n');
	return (0);
}
