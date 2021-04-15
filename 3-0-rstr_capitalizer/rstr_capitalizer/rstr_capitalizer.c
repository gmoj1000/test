#include <unistd.h>

int		islow(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		isup(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		isw(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	print(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		if ((isw(str[i + 1]) || str[i + 1] == 0) && islow(str[i]))
			c = str[i] - 32;
		else if (!isw(str[i + 1]) && str[i + 1] != 0 && isup(str[i]))
			c = str[i] + 32;
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	rstr(int ac, char **av)
{
	int i = 1;
	while (i < ac)
	{
		print(av[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac >= 2)
	{
		rstr(ac, av);
	}
	else	
		write(1, "\n", 1);
}
