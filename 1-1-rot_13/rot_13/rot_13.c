#include <unistd.h>

int		is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (is_lower(av[1][i]))
			{
				if (av[1][i] <= 'm')
					av[1][i] += 13;
				else
					av[1][i] -= 13;
			}
			if (is_upper(av[1][i]))
			{
				if (av[1][i] <= 'M')
					av[1][i] += 13;
				else
					av[1][i] -= 13;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
