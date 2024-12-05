#include <unistd.h>

int main (int ac, char **av)
{
	int i = 0;
	int in_space = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				in_space = 1;
			if (av[1][i] != ' ' && av[1][i] != '\t')
			{
				if (in_space)
					write(1, " ", 1);
				in_space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
