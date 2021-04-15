unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	ret;
	int				i;

	i = 0;
	ret = 0;
	while (i < 8)
	{
		ret *= 2;
		ret += octet % 2;
		octet /= 2;
		i++;
	}
	return (ret);
}
#include <stdio.h>
int main()
{
	printf("%d", reverse_bits(1));
}

