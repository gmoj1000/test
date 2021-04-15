#include <unistd.h>

char	convert(char c)
{
	char ret;
	ret = c;

	if ('a' <= c && c <= 'z')
	{
		ret = c - 'a';
		ret = 'z' - ret;
	}
	if ('A' <= c && c <= 'Z')
	{
		ret = c - 'A';
		ret = 'Z' - ret;
	}
	return (ret);
}

int		main(int ac, char **av)
{
	int		i;
	char	c;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			c = convert(av[1][i]);
			write(1, &c, 1);
			i++;
		}	
	}
	write(1, "\n", 1);
}
