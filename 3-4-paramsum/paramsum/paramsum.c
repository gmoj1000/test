#include <unistd.h>

void	print_num(int num)
{
	char c;

	if (num == 0)
		return ;
	print_num(num / 10);
	c = '0' + num % 10;
	write(1, &c, 1);	
}

int		main(int ac, char **av)
{
	(void) av;
	if (ac <= 1)
		write(1, "0", 2);
	else
		print_num(ac - 1);	
	write(1, "\n", 1);
}

