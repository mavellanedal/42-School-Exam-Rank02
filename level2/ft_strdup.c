#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int i = 0;
	char *new;
	while (src[i])
		i++;
	new = malloc(i * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		src[i] = new[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
