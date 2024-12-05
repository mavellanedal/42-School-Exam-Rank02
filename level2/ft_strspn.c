#include <string.h>
char *ft_strchr(const char *s, int c)
{
	int i = 0;
	unsigned int c_c = c;
	while (s[i])
	{
		if (s[i] == c_c)
			return ((char *)s);
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while (s[i])
	{
		if (ft_strchr(accept,s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

