int is_space(char c)
{
	if (c == '  ' || c == '\t')
		return (1);
	return (0);
}

int	base_chcker (int c, int base_l)
{
	int i = 0;
	char *lbase;
	char *ubase;
	i = 0;
	lbase = "0123456789abcdef";
	ubase = "0123456789ABCDEF";
	while (i < base_l)
	{
		if (c == lbase[i] || c == ubase[i])
			return(i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && base_check(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}