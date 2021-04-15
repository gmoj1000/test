#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	char*	c;

	if (ac == 2)
	{
		c = av[1];
		i = 0;
		while (c[i])
		{
			if ('a' <= c[i] && c[i] <= 'y')
				c[i]++;
			else if (c[i] == 'z')
				c[i] = 'a';
			else if ('A' <= c[i] && c[i] <= 'Y')
				c[i]++;
			else if (c[i] == 'Z')
				c[i] = 'A';
			write(1, &c[i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
}
