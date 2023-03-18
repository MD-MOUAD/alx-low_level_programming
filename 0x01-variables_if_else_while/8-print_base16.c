#include <stdio.h>
/**
  *main - Entry point
  *Return: 0
  */
int main(void)
{
	char n, c;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}


