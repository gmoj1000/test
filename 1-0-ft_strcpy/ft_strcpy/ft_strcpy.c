char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}


//	char *ret;

//	ret = s1;
//	while(*s2)
//		*(s1++) = *(s2++);
//	*s1 = 0;
//	return (ret);

#include <stdio.h>
int main()
{
	char a[] = "12345";
	char b[10];
	printf("%s", ft_strcpy(b, a));	
}
