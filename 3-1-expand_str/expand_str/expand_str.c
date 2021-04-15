#include <unistd.h>

int		is_w(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	expand(char *str)
{
	int i = 0;

	while (str[i] && is_w(str[i]))
		i++;
	while (str[i])
	{
		if (is_w(str[i - 1]) && is_w(str[i])) {}
		else if (is_w(str[i]))
			write(1, "   ", 3);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		expand(av[1]);
	}
	write(1, "\n", 1);
}
