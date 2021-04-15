#include <stdio.h>
#include <stdlib.h>

void	pgdc(int a, int b)
{
	int i;
	if (a > b)
		i = b;
	else
		i = a;
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d", i);
			return ;
		}
		i--;			
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		pgdc(a, b);	
	}
	printf("\n");	
}
