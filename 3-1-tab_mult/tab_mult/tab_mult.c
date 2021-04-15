#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	print_num(int num)
{
	if (num > 9)
	{
		print_num(num / 10);
		print_num(num % 10);
	}
	else
		ft_putchar('0' + num % 10);	
}

void	print_tab(int num)
{
	int i = 1;
	while (i <= 9)
	{
		print_num(i);
		write(1, " x ", 3);
		print_num(num);
		write(1, " = ", 3);
		print_num(num * i);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		print_tab(ft_atoi(av[1]));
	}
	else
		write(1, "\n", 1);
}
