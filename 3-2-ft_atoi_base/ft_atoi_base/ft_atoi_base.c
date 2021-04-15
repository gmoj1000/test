
int		to_num(char c, char *b)
{
	int i = 0;
	if ('A' <= c && c <= 'F')
		c += 32;
	while (b[i])
	{
		if (c == b[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	char b[] = "0123456789abcdef";
	int sign = 1;
	int val = 0;
	int i = 0;
	
	if (str[0] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		val *= str_base;
		val += to_num(str[i], b);
		i++;
	}
	return (val * sign);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("f", 16));
}
