#include <unistd.h>

int		find_go(char c, char *b, int j)
{
	while (b[j])
		if (b[j++] == c)
			return (j);
	return (-1);	
}

void	hidenp(char *a, char *b)
{
	int i = 0;
	int j = 0;;
	while (a[i])
	{
		j = find_go(a[i], b, j);
		if (j == -1)
		{
			write(1, "0\n", 2);
			return ;
		}
	i++;
	}
	write(1, "1\n", 2);
	return ;

}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	hidenp(av[1], av[2]);
	return (0);
}
