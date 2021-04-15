unsigned char	swap_bits(unsigned char octet)
{
	unsigned char front;
	unsigned char back;

	front = octet / 16;
	back = octet % 16;
	back *= 16;
	back += front;
	return (back);
}
#include <stdio.h>
int main()
{
	printf("%d", swap_bits(65));
}
