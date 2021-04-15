#include <unistd.h>
#include <stdlib.h>

int		w(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rev(char *str)
{
	int end;
	int i = 0;

	while(str[i])
		i++;
	end = i;
	while (i >= -1)
	{
		if (w(str[i]) || i == -1)
		{
			write(1, &str[i + 1], end - i - 1);
			end = i;
			if (i != -1)
				write(1, " ", 1);
		}
		i--;
	}

}

int		main(int ac, char** av)
{
	if (ac == 2)
	{
		rev(av[1]);
	}
	write (1, "\n", 1);
}
