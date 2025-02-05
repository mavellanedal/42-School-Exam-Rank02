#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int tokens = 0;
	char **res;

	while (str[i])
	{
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			tokens++;
		while ((str[i]) && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	res = (char **)malloc(sizeof(char *) * (tokens + 1));
	i = 0;
	while (str[i])
	{
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while ((str[i]) && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			res[k] = (char *)malloc(sizeof(char) * ((i - j) +1));
			ft_strncpy(res[k++], &str[j], i - j);
		}
	}
	res[k] = NULL;
	return (res);
}
