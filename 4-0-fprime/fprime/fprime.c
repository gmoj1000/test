#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int num;
	int i = 2;

	if (ac == 2)
	{
		num = atoi(av[1]);
		if (num == 1)
		{
			printf("1\n");
			return (0);
		}
		while (i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (i != num)
					printf("*");
				num /= i;
				i--;
			}
			i++;
		}
	}
	printf("\n");
}
