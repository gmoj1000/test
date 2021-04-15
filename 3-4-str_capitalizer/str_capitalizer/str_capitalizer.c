#include <unistd.h>

int		is_low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		is_up(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		is_white(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	cap_print(char *str)
{
	int i = 0;
	if (i == 0 && is_low(str[i]))
	{
		str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
	else if(i == 0 && is_up(str[i]))
	{
		write(1, &str[i], 1);
		i++;	
	}
	while (str[i])
	{
		if (is_white(str[i - 1]) && is_low(str[i]))
			str[i] -= 32;
		else if (!is_white(str[i - 1]) && is_up(str[i]))
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}	
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{	
		while (i < ac)
		{
			cap_print(av[i]);
			i++;
		}
	
	}
	else
		write(1, "\n", 1);
}
