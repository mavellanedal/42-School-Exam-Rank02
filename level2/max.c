int	max(int* tab, unsigned int len)
{
	int result; 
	unsigned int i = 0;
	if (len == 0)
		return (0);
	result = tab[i];
	while (tab[i])
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}


