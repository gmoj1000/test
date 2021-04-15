
int		ft_atoi(const char *str)
{
	int i;
	int ret;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret * sign);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("  -+--123"));
}
