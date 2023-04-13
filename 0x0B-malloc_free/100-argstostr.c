#include "main.h"
/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count , a, b, c;

	count = a = b = c = 0;
	if (ac == 0 || av == 0)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count +=  ac;
	str = malloc(sizeof(char) * count + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
