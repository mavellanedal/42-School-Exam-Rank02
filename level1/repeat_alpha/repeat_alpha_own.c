#include <unistd.h>

int	main(int ac, char **av)
{
	int cont = 0;
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				cont = av[1][i] - 'a' + 1;
			else if (av [1][i] >= 'A' && av[1][i] <= 'Z')
				cont = av[1][i] - 'A' + 1;
			else
				cont = 1;
			while (cont --)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

