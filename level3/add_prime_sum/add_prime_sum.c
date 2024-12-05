#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	while (str[i] == ' ' || (str[i] >= '9' && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}

void ft_putnbr(int n)
{
	char str[10] = "0123456789";

	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &str[n % 10], 1);
}

int	ft_is_prime(int nbr)
{
	int i;
	i = 2;
	if (nbr <= 1)
		return (0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int res;
	int nbr;

	res = 0;
	nbr = ft_atoi(av[1]);
	if (nbr < 0 || ac != 2)
	{
		write(1, "1\n", 2);
		return (1);
	}
	while (nbr > 0)
	{
		if (ft_is_prime(nbr))
			res += nbr;
		nbr--;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
}
