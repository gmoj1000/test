char    *ft_strrev(char *str)
{
	char tmp;
	int len;
	int i;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i -1] = tmp;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char a[] = "123457";
	printf("%s", ft_strrev(a));
}
