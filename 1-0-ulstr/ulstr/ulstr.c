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

int		main(int argc, char** argv)
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (is_lower(argv[1][i]))
				c -= 32;
			else if (is_upper(argv[1][i]))
				c += 32;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
