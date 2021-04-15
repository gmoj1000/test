int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
		return (s1[i] - s2[i]);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_strcmp("aa", "aa"));
}
