#include <unistd.h>
#include <stdio.h>

char	*find_last(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i--;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		i--;
	i++;
	return (&str[i]);
}

int		main(int ac, char **av)
{
	char	*result;
	int		i;

	if (ac == 2)
	{
		i = 0;
		result = find_last(av[1]);
		while (result[i] && result[i] != ' ' && result[i] != '\t')
		{
			write(1, &result[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
