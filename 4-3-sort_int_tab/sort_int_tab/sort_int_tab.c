void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
	i++;
	}
}
#include <stdio.h>
int main()
{
	int a[] = {9,8,7,6,5,4,3,2,1};
	sort_int_tab(a, 9);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}
