#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	char str;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av [1][i] >= 'a' && av[1][i] <= 'z')
				str = (av[1][i] - 'a' + 13) % 26 + 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				str = (av[1][i] - 'A' + 13) % 26 + 'A';
			else
				str = av[1][i];
			i++;
			write(1, &str, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
