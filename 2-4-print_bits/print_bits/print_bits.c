#include <unistd.h>

void	print(unsigned char octet, int cnt)
{
	char c;

	if (cnt == 8)
		return ;
	print(octet / 2, cnt + 1);
	c = '0' + octet % 2;
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	print(octet, 0);
}

int main()
{
	print_bits(69);
}
