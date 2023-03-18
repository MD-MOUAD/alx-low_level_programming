#include <stdio.h>
/**
  *main - Entry point
  *Return: 0
  */
int main(void)
{
	char C, c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
