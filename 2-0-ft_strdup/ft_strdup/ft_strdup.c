#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	while (src[i])
		i++;
	ret = (char *)malloc(i + 1);
	if (ret == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
