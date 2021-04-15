#include <stdlib.h>
#include <stdio.h>

int		is_white(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		arr_size(char *str)
{
	int i = 0;
	int cnt = 0;
	if (!is_white(str[i]) && str[i])
	{
		cnt++;
		i++;
	}
	while (str[i])
	{
		if (is_white(str[i - 1]) && !is_white(str[i]))
			cnt++;
		i++;
	}	

	printf("count is: %d", cnt);
	return (cnt);
}

void	ft_strcpy(char *dest, char *src, int start, int end)
{
	int i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = 0;
}

char    **ft_split(char *str)
{
	char **ret;
	int size;
	int cur;
	int start;
	int end;
	int i = 0;

	cur = 0;
	size = arr_size(str);
	ret = (char **)malloc(sizeof(char *) * (size + 1000));
	while (is_white(str[cur] && str[cur]))
		cur++;
	while (str[cur])
	{
		if (!is_white(str[cur]))
		{
			start = cur;
			while (!is_white(str[cur]))
				cur++;
			end = cur;
			ret[i] = (char *)malloc(end - start + 1);
			ft_strcpy(ret[i], str, start, end);
			i++;
		}
		else
			cur++;
	}
	ret[i] = 0;
	return (ret);
}
