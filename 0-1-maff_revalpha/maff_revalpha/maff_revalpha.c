#include <unistd.h>

int		main()
{
	char even;
	char odd;

	odd = 'z';
	even = 'Y';
	while (even >= 'A')
	{
		write(1, &odd, 1);
		write(1, &even , 1);
		odd -= 2;
		even -= 2;
	}
	return (0);
}
