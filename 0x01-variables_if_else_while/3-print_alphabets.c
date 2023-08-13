#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;
	char p;

	v = 'a';
	p = 'A';
	while (v <= 'z')
	{
		putchar(v);
		v++;
	}
	while (p <= 'Z')
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
