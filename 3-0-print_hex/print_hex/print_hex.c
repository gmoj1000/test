#include <unistd.h>

int		ft_atoi(char *str)
{
	int i = 0;
	int ret = 0;

	while (str[i])
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret);
}

void	print_hex(int num)
{
	if (num == 0)
		return ;
	char hex[] = "0123456789abcdef";

	print_hex(num / 16);
	write(1, &hex[num % 16], 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_atoi(av[1]) == 0)
			write(1, "0", 1);
		else
			print_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}
