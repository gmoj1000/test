#include <unistd.h>

int		is_double_in(char *str, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[i] == str[j])
			return (1);
		j++;
	}
	return (0);
}

int		is_double_out(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			if (!is_double_in(av[1], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if(!is_double_in(av[2], i) && !is_double_out(av[1], av[2][i]))
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
