#include <unistd.h>

int is_prime(int n)
{
	int i = 2;
	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *str)
{
	int sign = 1;
	int res = 0;
	int i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
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

int main (int ac, char **av)
{
	int nbr;
	int sum = 0;
	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	nbr = ft_atoi(av[1]);
	while (nbr > 0)
	{
		if(is_prime(nbr))
			sum += nbr;
		nbr--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
