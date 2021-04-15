#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		check_double(char *str, int i)
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

int		main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !check_double(av[1], i))
				{
					write(1, &av[1][i], 1);
					break ;
				}
				j++;				
			}
			i++;
		}	
	}
	write(1, "\n", 1);
}
