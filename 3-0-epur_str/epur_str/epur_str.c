#include <unistd.h>

int is_s(char c)
{
	if (c == ' ' || c == '\t')
		return(1);
	return (0);
}

void	epur_str(char *str)
{
	int i = 0;
	while (is_s(str[i]))
		i++;
	while (str[i])
	{
		if (!is_s(str[i - 1]) || ! is_s(str[i]))
			write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
