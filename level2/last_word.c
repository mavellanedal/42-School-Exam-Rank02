#include <unistd.h>
int main (int ac, char **av)
{
	int i = 0;
	int start = 0;
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while ((i >= 0) && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		start = i;
		while ((i >= 0) && (av[1][i] != ' ' && av[1][i] != '\t'))
			i--;
		i++;
		while (i <= start)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	
	}
	write(1, "\n", 1);
	return (0);
}
