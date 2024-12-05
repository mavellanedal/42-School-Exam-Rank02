char	*ft_strrev(char *str)
{
	int i = -1;
	char	temporary;
	int length = 0;
	while (str[length])
		length++;
	while (++i < length / 2)
	{
		temporary = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temporary;
	}
	return (str);
}
