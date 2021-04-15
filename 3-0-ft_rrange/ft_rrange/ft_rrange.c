#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *ret;
	int size;

	if (end > start)
		size = end - start + 1;
	else
		size = start - end + 1;
	ret = (int *)malloc(sizeof(int) * size);

	int i = 0;
	if (end > start)
	{
		while (end >= start)
		{
			ret[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			ret[i] = end;
			end++;
			i++;
		}
	}
	return (ret);
}
#include <stdio.h>
int main()
{
	int *n;
	n = ft_rrange(-3, 0);
	printf("%d %d %d %d", n[0], n[1], n[2], n[3]);
}
