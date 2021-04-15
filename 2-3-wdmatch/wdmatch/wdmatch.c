#include <unistd.h>

int		check(char *str, char c, int j)
{
	while (str[j])
		if (str[j++] == c)
			return (j);
	return (-1);
}

int		main(int gc, char **gv)
{
	 int i;
	 int j;

	 if (gc != 3)
	 {
	 	write(1, "\n", 1);
		return (0);
	 }
	 i = 0;
	 j = 0;
	 while (gv[1][i])
	 {
	 	j = check(gv[2], gv[1][i], j);
		if (j == -1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	 }
	 i = 0;
	 while (gv[1][i])
		 write(1, &gv[1][i++], 1);
	 return (0);
}
