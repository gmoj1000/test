#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(int ac, char** av)
{
	int a;
	int b;

	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (av[2][0] == '*')
		printf("%d", a * b);
	else if (av[2][0] == '/')
		printf("%d", a / b);
	else if (av[2][0] == '+')
		printf("%d", a + b);
	else if (av[2][0] == '-')
		printf("%d", a - b);
	else if (av[2][0] == '%')
		printf("%d", a & b);
	else
		write(1, "\n", 1);
	printf("\n");
	return (0);
}
