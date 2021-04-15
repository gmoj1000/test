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

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (is_lower(argv[1][i]))
			{
				j = -1;
				while (++j < argv[1][i] - 'a')
					write(1, &argv[1][i], 1);	
			}
			if (is_upper(argv[1][i]))
			{
				j = -1;
				while (++j < argv[1][i] - 'A')
					write(1, &argv[1][i], 1);	
			}
			write(1, &argv[1][i], 1);	
			i++;
		}
	}
	write(1, "\n", 1);	
	return (0);
}
