#include <unistd.h>

int is_space (char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main (int ac, char **av)
{
	int i = 0;
	int in_space = 0;
	if (ac == 2)
	{
		while (is_space(av[1][i]))
			i++;

		while (av[1][i])
		{
			if (is_space(av[1][i]))
				in_space = 1;
			if (!is_space(av[1][i]))
			{
				if(in_space)
					write(1, "   ", 3);
				in_space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
