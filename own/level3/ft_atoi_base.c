int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int check_base (char c)
{
	int i = 0;
	char lbase[16] = "0123456789abcdef";
	char ubase[16] = "0123456789ABCDEF";
	while (i < lbase)
	{
		if (c == lbase[i] || c == ubase[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		sign *= -1;
	i++;
	while(str[i])
	{
		sign *= str_base;
		if (str[i] <= '0' && str <= '9')
			res += str[i] -'0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			res  += str[i] + 10 - 'a';
		else if (str[i] >= 'A' && str[i] <= 'F')
			res  += str[i] + 10 - 'A';
		i++;
	}
	return (res * sign);
}