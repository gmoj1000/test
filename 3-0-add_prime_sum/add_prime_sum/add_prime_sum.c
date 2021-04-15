#include <unistd.h>

int		ft_atoi(char *str)
{
	int ret = 0;
	int sign;
	int i;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ('0' <= str[i] && str[i] <= '9'))
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret * sign);
}

int		is_prime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (num);
}

void	print_num(int val)
{
	char c;
	
	if (val == 0)
		return ;
	print_num(val / 10);
	c = '0' + val % 10;
	write(1, &c, 1);
}
#include <stdio.h>
int		main(int ac, char **av)
{
	int num;
	int val = 0;
	int i = 2;

	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	num = ft_atoi(av[1]);
	printf("num:%d\n", num);
	if (num <= 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i <= num)
	{
		val += is_prime(i);
		i++;
	}
	print_num(val);
	return (0);
}
